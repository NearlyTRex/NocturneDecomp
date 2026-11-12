; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_flashlit_cpp_FUN_004a1bb0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_fldnotes.cpp_FUN_004a5700 at 004a58a1
;   core_fldnotes.cpp_FUN_004a5f60 at 004a609f
;
; Referenced Globals:
;   undefined4 DAT_01cab9f0
;   undefined4 SNotesSection_ARRAY_01cab9f4[0].first_page
;   undefined4 SNotesSection_ARRAY_01cab9f4[0].page_count
;   undefined4 SNotesSection_ARRAY_01cab9f4[1].first_page
;   undefined4 SNotesSection_ARRAY_01cab9f4[1].page_count
;   undefined4 SNotesSection_ARRAY_01cab9f4[1].tab_x
;   undefined4 SNotesSection_ARRAY_01cab9f4[1].tab_y
;   undefined4 DAT_01caf110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1bb0
        ;   Label: core_flashlit.cpp_FUN_004a1bb0
    PUSH ESI                            ; 004a1bb1
    PUSH EDI                            ; 004a1bb2
    PUSH EBP                            ; 004a1bb3
    SUB ESP,0x8                         ; 004a1bb4
    MOV ECX,dword ptr [0x01cab9f0]      ; 004a1bb7 | DAT_01cab9f0
    XOR EDX,EDX                         ; 004a1bbd
    TEST ECX,ECX                        ; 004a1bbf
    JLE 0x004a1c3f                      ; 004a1bc1
        ;   XREF to: 004a1c3f (CONDITIONAL_JUMP)  ; LAB_004a1c3f
    MOV EAX,0x1cab9f4                   ; 004a1bc7
    XOR ECX,ECX                         ; 004a1bcc
    IMUL ESI,EDX,0x2e4                  ; 004a1bce
        ;   Label: LAB_004a1bce
    MOV EBX,dword ptr [ESI + 0x1cabb3c] ; 004a1bd4 | SNotesSection_ARRAY_01cab9f4[1].tab_x
    MOV EBP,dword ptr [ESI + 0x1cabb40] ; 004a1bda | SNotesSection_ARRAY_01cab9f4[1].tab_y
    MOV ESI,dword ptr [ECX + 0x1caf134] ; 004a1be0
    ADD ESI,EBX                         ; 004a1be6
    MOV dword ptr [ESP + 0x4],ESI       ; 004a1be8
    MOV ESI,dword ptr [ECX + 0x1caf138] ; 004a1bec
    ADD ESI,EBP                         ; 004a1bf2
    MOV EDI,dword ptr [0x01caf110]      ; 004a1bf4 | DAT_01caf110
    MOV dword ptr [ESP],ESI             ; 004a1bfa
    MOV ESI,dword ptr [EAX + 0x140]     ; 004a1bfd | SNotesSection_ARRAY_01cab9f4[0].first_page | SNotesSection_ARRAY_01cab9f4[1].first_page
    CMP EDI,ESI                         ; 004a1c03
    JL 0x004a1c4c                       ; 004a1c05
        ;   XREF to: 004a1c4c (CONDITIONAL_JUMP)  ; LAB_004a1c4c
    ADD ESI,dword ptr [EAX + 0x144]     ; 004a1c07 | SNotesSection_ARRAY_01cab9f4[0].page_count | SNotesSection_ARRAY_01cab9f4[1].page_count
    CMP ESI,EDI                         ; 004a1c0d
    JLE 0x004a1c4c                      ; 004a1c0f
        ;   XREF to: 004a1c4c (CONDITIONAL_JUMP)  ; LAB_004a1c4c
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004a1c11
        ;   Label: LAB_004a1c11
    CMP EBX,EDI                         ; 004a1c15
    JG 0x004a1c2c                       ; 004a1c17
        ;   XREF to: 004a1c2c (CONDITIONAL_JUMP)  ; LAB_004a1c2c
    MOV EBX,dword ptr [ESP + 0x20]      ; 004a1c19
    CMP EBP,EBX                         ; 004a1c1d
    JG 0x004a1c2c                       ; 004a1c1f
        ;   XREF to: 004a1c2c (CONDITIONAL_JUMP)  ; LAB_004a1c2c
    CMP EDI,dword ptr [ESP + 0x4]       ; 004a1c21
    JGE 0x004a1c2c                      ; 004a1c25
        ;   XREF to: 004a1c2c (CONDITIONAL_JUMP)  ; LAB_004a1c2c
    CMP EBX,dword ptr [ESP]             ; 004a1c27
    JL 0x004a1c53                       ; 004a1c2a
        ;   XREF to: 004a1c53 (CONDITIONAL_JUMP)  ; LAB_004a1c53
    MOV EBX,dword ptr [0x01cab9f0]      ; 004a1c2c | DAT_01cab9f0
        ;   Label: LAB_004a1c2c
    ADD EAX,0x2e4                       ; 004a1c32
    INC EDX                             ; 004a1c37
    ADD ECX,0x14                        ; 004a1c38
    CMP EDX,EBX                         ; 004a1c3b
    JL 0x004a1bce                       ; 004a1c3d
        ;   XREF to: 004a1bce (CONDITIONAL_JUMP)  ; LAB_004a1bce
    MOV EAX,0xffffffff                  ; 004a1c3f
        ;   Label: LAB_004a1c3f
    ADD ESP,0x8                         ; 004a1c44
    POP EBP                             ; 004a1c47
    POP EDI                             ; 004a1c48
    POP ESI                             ; 004a1c49
    POP EBX                             ; 004a1c4a
    RET                                 ; 004a1c4b
    MOV EBX,0x246                       ; 004a1c4c
        ;   Label: LAB_004a1c4c
    JMP 0x004a1c11                      ; 004a1c51
        ;   XREF to: 004a1c11 (UNCONDITIONAL_JUMP)  ; LAB_004a1c11
    MOV EAX,EDX                         ; 004a1c53
        ;   Label: LAB_004a1c53
    ADD ESP,0x8                         ; 004a1c55
    POP EBP                             ; 004a1c58
    POP EDI                             ; 004a1c59
    POP ESI                             ; 004a1c5a
    POP EBX                             ; 004a1c5b
    RET                                 ; 004a1c5c

