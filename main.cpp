#include "ui_rgbhsv_qt.h"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  QDialog *dialog = new QDialog;
  Ui_DialogRgbHsv ui;
  ui.setupUi(dialog);

  dialog->show();
  return app.exec();
}
