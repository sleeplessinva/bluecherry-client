#include "OptionsDialog.h"
#include <QBoxLayout>
#include <QTabWidget>

OptionsDialog::OptionsDialog(QWidget *parent)
    : QDialog(parent)
{
    setModal(true);

    QBoxLayout *layout = new QVBoxLayout(this);
    layout->setContentsMargins(0, 3, 0, 0);

    m_tabWidget = new QTabWidget;
    m_tabWidget->setDocumentMode(true);
    layout->addWidget(m_tabWidget);

    m_tabWidget->addTab(new QWidget, tr("General"));
    m_tabWidget->addTab(new QWidget, tr("DVR Servers"));
}
