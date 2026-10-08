#pragma once

#include "shape/edittool/strlist.h"
#include "shape/fwd.h"

#include <cstdint>

namespace nocturne::shape {

class CPickList : public CStrList {
public:
    CPickList();
    ~CPickList() override;

    void remove(int start_index, int end_index) override;
    void sort(int sort_type, int sort_order) override;
    void insert(int insert_index, char *string_data) override;
    void swap(int index1, int index2) override;
    void clear() override;
    virtual int handleInput();

    int displayChoicesAndWaitForInput(char *dialog_title, int initial_selected_index,
                                      std::uint32_t window_flags);
    void initializeDialog(char *dialog_title, int initial_selected_index,
                          std::uint32_t window_flags);
    int handleDialogInput();
    void renderDialog();
    void enableItem(int item_index, int enable_flag);
};

} // namespace nocturne::shape
