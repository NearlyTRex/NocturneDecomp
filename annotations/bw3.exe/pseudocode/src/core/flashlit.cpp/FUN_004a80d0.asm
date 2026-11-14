; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_flashlit_cpp_FUN_004a80d0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_fldnotes.cpp_CFieldNotes_draw_FUN_004abe00 at 004abfb6
;   core_fldnotes.cpp_CFieldNotes_process_FUN_004ac6b0 at 004ac7ef
;
; Referenced Globals:
;   undefined4 DAT_01d0d210
;   undefined4 SNotesSection_ARRAY_01d0d214[0].first_page
;   undefined4 SNotesSection_ARRAY_01d0d214[0].page_count
;   undefined4 SNotesSection_ARRAY_01d0d214[0].tab_x
;   undefined4 SNotesSection_ARRAY_01d0d214[0].tab_y
;   undefined4 SNotesSection_ARRAY_01d0d214[1].first_page
;   undefined4 SNotesSection_ARRAY_01d0d214[1].page_count
;   undefined4 SNotesSection_ARRAY_01d0d214[1].tab_x
;   undefined4 SNotesSection_ARRAY_01d0d214[1].tab_y
;   undefined4 DAT_01d19ba8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a80d0
        ;   Label: core_flashlit.cpp_FUN_004a80d0
    PUSH ESI                            ; 004a80d1
    PUSH EDI                            ; 004a80d2
    PUSH EBP                            ; 004a80d3
    SUB ESP,0x8                         ; 004a80d4
    MOV ECX,dword ptr [0x01d0d210]      ; 004a80d7 | DAT_01d0d210
    XOR EDX,EDX                         ; 004a80dd
    TEST ECX,ECX                        ; 004a80df
    JLE 0x004a815f                      ; 004a80e1
        ;   XREF to: 004a815f (CONDITIONAL_JUMP)  ; LAB_004a815f
    MOV EAX,0x1d0d214                   ; 004a80e7
    XOR ECX,ECX                         ; 004a80ec
    IMUL ESI,EDX,0x2e4                  ; 004a80ee
        ;   Label: LAB_004a80ee
    MOV EBX,dword ptr [ESI + 0x1d0d35c] ; 004a80f4 | SNotesSection_ARRAY_01d0d214[0].tab_x | SNotesSection_ARRAY_01d0d214[1].tab_x
    MOV EBP,dword ptr [ESI + 0x1d0d360] ; 004a80fa | SNotesSection_ARRAY_01d0d214[0].tab_y | SNotesSection_ARRAY_01d0d214[1].tab_y
    MOV ESI,dword ptr [ECX + 0x1d19bcc] ; 004a8100
    ADD ESI,EBX                         ; 004a8106
    MOV dword ptr [ESP + 0x4],ESI       ; 004a8108
    MOV ESI,dword ptr [ECX + 0x1d19bd0] ; 004a810c
    ADD ESI,EBP                         ; 004a8112
    MOV EDI,dword ptr [0x01d19ba8]      ; 004a8114 | DAT_01d19ba8
    MOV dword ptr [ESP],ESI             ; 004a811a
    MOV ESI,dword ptr [EAX + 0x140]     ; 004a811d | SNotesSection_ARRAY_01d0d214[0].first_page | SNotesSection_ARRAY_01d0d214[1].first_page
    CMP EDI,ESI                         ; 004a8123
    JL 0x004a816c                       ; 004a8125
        ;   XREF to: 004a816c (CONDITIONAL_JUMP)  ; LAB_004a816c
    ADD ESI,dword ptr [EAX + 0x144]     ; 004a8127 | SNotesSection_ARRAY_01d0d214[0].page_count | SNotesSection_ARRAY_01d0d214[1].page_count
    CMP ESI,EDI                         ; 004a812d
    JLE 0x004a816c                      ; 004a812f
        ;   XREF to: 004a816c (CONDITIONAL_JUMP)  ; LAB_004a816c
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004a8131
        ;   Label: LAB_004a8131
    CMP EBX,EDI                         ; 004a8135
    JG 0x004a814c                       ; 004a8137
        ;   XREF to: 004a814c (CONDITIONAL_JUMP)  ; LAB_004a814c
    MOV EBX,dword ptr [ESP + 0x20]      ; 004a8139
    CMP EBP,EBX                         ; 004a813d
    JG 0x004a814c                       ; 004a813f
        ;   XREF to: 004a814c (CONDITIONAL_JUMP)  ; LAB_004a814c
    CMP EDI,dword ptr [ESP + 0x4]       ; 004a8141
    JGE 0x004a814c                      ; 004a8145
        ;   XREF to: 004a814c (CONDITIONAL_JUMP)  ; LAB_004a814c
    CMP EBX,dword ptr [ESP]             ; 004a8147
    JL 0x004a8173                       ; 004a814a
        ;   XREF to: 004a8173 (CONDITIONAL_JUMP)  ; LAB_004a8173
    MOV EBX,dword ptr [0x01d0d210]      ; 004a814c | DAT_01d0d210
        ;   Label: LAB_004a814c
    ADD EAX,0x2e4                       ; 004a8152
    INC EDX                             ; 004a8157
    ADD ECX,0x14                        ; 004a8158
    CMP EDX,EBX                         ; 004a815b
    JL 0x004a80ee                       ; 004a815d
        ;   XREF to: 004a80ee (CONDITIONAL_JUMP)  ; LAB_004a80ee
    MOV EAX,0xffffffff                  ; 004a815f
        ;   Label: LAB_004a815f
    ADD ESP,0x8                         ; 004a8164
    POP EBP                             ; 004a8167
    POP EDI                             ; 004a8168
    POP ESI                             ; 004a8169
    POP EBX                             ; 004a816a
    RET                                 ; 004a816b
    MOV EBX,0x246                       ; 004a816c
        ;   Label: LAB_004a816c
    JMP 0x004a8131                      ; 004a8171
        ;   XREF to: 004a8131 (UNCONDITIONAL_JUMP)  ; LAB_004a8131
    MOV EAX,EDX                         ; 004a8173
        ;   Label: LAB_004a8173
    ADD ESP,0x8                         ; 004a8175
    POP EBP                             ; 004a8178
    POP EDI                             ; 004a8179
    POP ESI                             ; 004a817a
    POP EBX                             ; 004a817b
    RET                                 ; 004a817c

