ui_%.h: %.ui
	uic $< -o $@
