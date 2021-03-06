#include "LearningGraphWindow.h"

#include <QFrame>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>

LearningGraphWindow::LearningGraphWindow(
    int themeId, QWidget* parent)
        : QWidget(parent), themeId(themeId) {
    setWindowTitle(QString("%1 Learning Graph").arg(themeId));

    // Main Layout
    auto* vbox = new QVBoxLayout(this);
    vbox->setSpacing(15);
    setLayout(vbox);

    // Place for Graph
    auto* frame = new QFrame;
    frame->setFrameStyle(QFrame::StyledPanel);
    frame->setMinimumSize({300, 200});
    vbox->addWidget(frame);

    // Buttons
    auto* hbox = new QHBoxLayout;
    vbox->addLayout(hbox);

    hbox->addStretch(1);

    auto* exportBtn = new QPushButton("Export");
    hbox->addWidget(exportBtn);

    auto* okBtn = new QPushButton("Ok");
    hbox->addWidget(okBtn);
}
