; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_fldnotes_cpp_FUN_004bbd10(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fldnotes.cpp_FUN_004bc130 at 004bc15b
;
; Referenced Globals:
;   TerminatedCString s_image_box_32_32_005dfb3d
;   TerminatedCString s_image_check_32_32_005dfb4f
;   undefined4 DAT_005dfb63
;   TerminatedCString s_cont_005dfb68
;   TerminatedCString s_ul_br_005dfb70
;   TerminatedCString s_ERROR_item_won_t_fit_br_005dfb7a
;   undefined4 DAT_01cc4268
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004bb290
;   core_fldnotes.cpp_FUN_004bb2f0
;   core_fldnotes.cpp_FUN_004bca60
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0
;   support_newmsg.cpp_getLocalizedString_FUN_00531090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bbd10
        ;   Label: core_fldnotes.cpp_FUN_004bbd10
    PUSH ESI                            ; 004bbd11
    PUSH EDI                            ; 004bbd12
    PUSH EBP                            ; 004bbd13
    SUB ESP,0xc                         ; 004bbd14
    MOV EBX,dword ptr [ESP + 0x24]      ; 004bbd17
    MOV ESI,dword ptr [ESP + 0x20]      ; 004bbd1b
    MOV EAX,dword ptr [EBX + 0x10]      ; 004bbd1f
    MOV EDX,dword ptr [0x01cc4268]      ; 004bbd22 | DAT_01cc4268
    MOV dword ptr [ESI + 0x144],EAX     ; 004bbd28
    TEST EDX,EDX                        ; 004bbd2e
    JZ 0x004bbd9f                       ; 004bbd30
        ;   XREF to: 004bbd9f (CONDITIONAL_JUMP)  ; LAB_004bbd9f
    MOV EAX,dword ptr [ESP + 0x20]      ; 004bbd32
        ;   Label: LAB_004bbd32
    MOV EBP,dword ptr [EAX + 0x140]     ; 004bbd36
    CMP EBP,0x3                         ; 004bbd3c
    JZ 0x004bbdc4                       ; 004bbd3f
        ;   XREF to: 004bbdc4 (CONDITIONAL_JUMP)  ; LAB_004bbdc4
    CMP EBP,0x4                         ; 004bbd45
    JZ 0x004bbde2                       ; 004bbd48
        ;   XREF to: 004bbde2 (CONDITIONAL_JUMP)  ; LAB_004bbde2
    MOV EAX,dword ptr [ESP + 0x20]      ; 004bbd4e
        ;   Label: LAB_004bbd4e
    MOV ECX,dword ptr [EAX + 0x158]     ; 004bbd52
    TEST ECX,ECX                        ; 004bbd58
    JGE 0x004bbe00                      ; 004bbd5a
        ;   XREF to: 004bbe00 (CONDITIONAL_JUMP)  ; LAB_004bbe00
    MOV EAX,dword ptr [ESP + 0x20]      ; 004bbd60
        ;   Label: LAB_004bbd60
    ADD EAX,0x40                        ; 004bbd64
    MOV EBP,0xffffffff                  ; 004bbd67
    MOV dword ptr [ESP],EAX             ; 004bbd6c
    MOV EAX,dword ptr [ESP + 0x20]      ; 004bbd6f
    XOR EDI,EDI                         ; 004bbd73
    ADD EAX,0x148                       ; 004bbd75
    MOV dword ptr [ESP + 0x8],EDI       ; 004bbd7a
    MOV dword ptr [ESP + 0x4],EAX       ; 004bbd7e
    MOV EAX,dword ptr [ESP + 0x4]       ; 004bbd82
        ;   Label: LAB_004bbd82
    MOV EDX,dword ptr [ESP + 0x8]       ; 004bbd86
    CMP EDX,dword ptr [EAX]             ; 004bbd8a
    JL 0x004bbe25                       ; 004bbd8c
        ;   XREF to: 004bbe25 (CONDITIONAL_JUMP)  ; LAB_004bbe25
    MOV EAX,0x1                         ; 004bbd92
        ;   Label: LAB_004bbd92
    ADD ESP,0xc                         ; 004bbd97
        ;   Label: LAB_004bbd97
    POP EBP                             ; 004bbd9a
    POP EDI                             ; 004bbd9b
    POP ESI                             ; 004bbd9c
    POP EBX                             ; 004bbd9d
    RET                                 ; 004bbd9e
    MOV ECX,dword ptr [ESI + 0x140]     ; 004bbd9f
        ;   Label: LAB_004bbd9f
    TEST ECX,ECX                        ; 004bbda5
    JZ 0x004bbd92                       ; 004bbda7
        ;   XREF to: 004bbd92 (CONDITIONAL_JUMP)  ; LAB_004bbd92
    CMP ECX,0x2                         ; 004bbda9
    JZ 0x004bbd92                       ; 004bbdac
        ;   XREF to: 004bbd92 (CONDITIONAL_JUMP)  ; LAB_004bbd92
    CMP ECX,0x5                         ; 004bbdae
    JNZ 0x004bbd32                      ; 004bbdb1
        ;   XREF to: 004bbd32 (CONDITIONAL_JUMP)  ; LAB_004bbd32
    MOV EAX,0x1                         ; 004bbdb7
    ADD ESP,0xc                         ; 004bbdbc
    POP EBP                             ; 004bbdbf
    POP EDI                             ; 004bbdc0
    POP ESI                             ; 004bbdc1
    POP EBX                             ; 004bbdc2
    RET                                 ; 004bbdc3
    PUSH 0x5dfb3d                       ; 004bbdc4 | = "<image box 32 32>"
        ;   Label: LAB_004bbdc4
    PUSH EBX                            ; 004bbdc9
    CALL core_fldnotes.cpp_FUN_004bb290 ; 004bbdca
        ;   XREF to: 004bb290 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bb290()
    ADD ESP,0x8                         ; 004bbdcf
    TEST EAX,EAX                        ; 004bbdd2
    JNZ 0x004bbd4e                      ; 004bbdd4
        ;   XREF to: 004bbd4e (CONDITIONAL_JUMP)  ; LAB_004bbd4e
    ADD ESP,0xc                         ; 004bbdda
    POP EBP                             ; 004bbddd
    POP EDI                             ; 004bbdde
    POP ESI                             ; 004bbddf
    POP EBX                             ; 004bbde0
    RET                                 ; 004bbde1
    PUSH 0x5dfb4f                       ; 004bbde2 | = "<image check 32 32>"
        ;   Label: LAB_004bbde2
    PUSH EBX                            ; 004bbde7
    CALL core_fldnotes.cpp_FUN_004bb290 ; 004bbde8
        ;   XREF to: 004bb290 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bb290()
    ADD ESP,0x8                         ; 004bbded
    TEST EAX,EAX                        ; 004bbdf0
    JNZ 0x004bbd4e                      ; 004bbdf2
        ;   XREF to: 004bbd4e (CONDITIONAL_JUMP)  ; LAB_004bbd4e
    ADD ESP,0xc                         ; 004bbdf8
    POP EBP                             ; 004bbdfb
    POP EDI                             ; 004bbdfc
    POP ESI                             ; 004bbdfd
    POP EBX                             ; 004bbdfe
    RET                                 ; 004bbdff
    IMUL EAX,ECX,0x970                  ; 004bbe00
        ;   Label: LAB_004bbe00
    PUSH EBX                            ; 004bbe06
    ADD EAX,0x1cc55d0                   ; 004bbe07
    PUSH EAX                            ; 004bbe0c
    CALL core_fldnotes.cpp_FUN_004bca60 ; 004bbe0d
        ;   XREF to: 004bca60 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bca60()
    ADD ESP,0x8                         ; 004bbe12
    TEST EAX,EAX                        ; 004bbe15
    JNZ 0x004bbd60                      ; 004bbe17
        ;   XREF to: 004bbd60 (CONDITIONAL_JUMP)  ; LAB_004bbd60
    ADD ESP,0xc                         ; 004bbe1d
    POP EBP                             ; 004bbe20
    POP EDI                             ; 004bbe21
    POP ESI                             ; 004bbe22
    POP EBX                             ; 004bbe23
    RET                                 ; 004bbe24
    PUSH EDX                            ; 004bbe25
        ;   Label: LAB_004bbe25
    MOV ESI,dword ptr [ESP + 0x8]       ; 004bbe26
    PUSH ESI                            ; 004bbe2a
    XOR EDI,EDI                         ; 004bbe2b
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0 ; 004bbe2d
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004bbe32
    MOV DL,byte ptr [EAX]               ; 004bbe35
    MOV ESI,EAX                         ; 004bbe37
    TEST DL,DL                          ; 004bbe39
    JZ 0x004bbf06                       ; 004bbe3b
        ;   XREF to: 004bbf06 (CONDITIONAL_JUMP)  ; LAB_004bbf06
    CMP EBP,dword ptr [EBX + 0x10]      ; 004bbe41
        ;   Label: LAB_004bbe41
    JZ 0x004bbe53                       ; 004bbe44
        ;   XREF to: 004bbe53 (CONDITIONAL_JUMP)  ; LAB_004bbe53
    MOV EAX,dword ptr [ESP + 0x20]      ; 004bbe46
    CMP byte ptr [EAX + 0x40],0x0       ; 004bbe4a
    JNZ 0x004bbe77                      ; 004bbe4e
        ;   XREF to: 004bbe77 (CONDITIONAL_JUMP)  ; LAB_004bbe77
    MOV EBP,dword ptr [EBX + 0x10]      ; 004bbe50
        ;   Label: LAB_004bbe50
    PUSH ESI                            ; 004bbe53
        ;   Label: LAB_004bbe53
    PUSH EBX                            ; 004bbe54
    CALL core_fldnotes.cpp_FUN_004bb2f0 ; 004bbe55
        ;   XREF to: 004bb2f0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bb2f0()
    ADD ESP,0x8                         ; 004bbe5a
    TEST EAX,EAX                        ; 004bbe5d
    JL 0x004bbee4                       ; 004bbe5f
        ;   XREF to: 004bbee4 (CONDITIONAL_JUMP)  ; LAB_004bbee4
    JLE 0x004bbeee                      ; 004bbe65
        ;   XREF to: 004bbeee (CONDITIONAL_JUMP)  ; LAB_004bbeee
    ADD ESI,EAX                         ; 004bbe6b
    CMP byte ptr [ESI],0x0              ; 004bbe6d
        ;   Label: LAB_004bbe6d
    JNZ 0x004bbe41                      ; 004bbe70
        ;   XREF to: 004bbe41 (CONDITIONAL_JUMP)  ; LAB_004bbe41
    JMP 0x004bbf06                      ; 004bbe72
        ;   XREF to: 004bbf06 (UNCONDITIONAL_JUMP)  ; LAB_004bbf06
    PUSH 0x5dfb63                       ; 004bbe77 | DAT_005dfb63
        ;   Label: LAB_004bbe77
    PUSH EBX                            ; 004bbe7c
    CALL core_fldnotes.cpp_FUN_004bb290 ; 004bbe7d
        ;   XREF to: 004bb290 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bb290()
    ADD ESP,0x8                         ; 004bbe82
    TEST EAX,EAX                        ; 004bbe85
    JZ 0x004bbd97                       ; 004bbe87
        ;   XREF to: 004bbd97 (CONDITIONAL_JUMP)  ; LAB_004bbd97
    MOV EDX,dword ptr [ESP]             ; 004bbe8d
    PUSH EDX                            ; 004bbe90
    PUSH EBX                            ; 004bbe91
    CALL core_fldnotes.cpp_FUN_004bb290 ; 004bbe92
        ;   XREF to: 004bb290 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bb290()
    ADD ESP,0x8                         ; 004bbe97
    TEST EAX,EAX                        ; 004bbe9a
    JZ 0x004bbd97                       ; 004bbe9c
        ;   XREF to: 004bbd97 (CONDITIONAL_JUMP)  ; LAB_004bbd97
    CMP EBP,-0x1                        ; 004bbea2
    JZ 0x004bbec6                       ; 004bbea5
        ;   XREF to: 004bbec6 (CONDITIONAL_JUMP)  ; LAB_004bbec6
    PUSH 0x5dfb68                       ; 004bbea7 | = "(cont.)"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004bbeac
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004bbeb1
    PUSH EAX                            ; 004bbeb4
    PUSH EBX                            ; 004bbeb5
    CALL core_fldnotes.cpp_FUN_004bb290 ; 004bbeb6
        ;   XREF to: 004bb290 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bb290()
    ADD ESP,0x8                         ; 004bbebb
    TEST EAX,EAX                        ; 004bbebe
    JZ 0x004bbd97                       ; 004bbec0
        ;   XREF to: 004bbd97 (CONDITIONAL_JUMP)  ; LAB_004bbd97
    PUSH 0x5dfb70                       ; 004bbec6 | = "</ul><br>"
        ;   Label: LAB_004bbec6
    PUSH EBX                            ; 004bbecb
    CALL core_fldnotes.cpp_FUN_004bb290 ; 004bbecc
        ;   XREF to: 004bb290 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bb290()
    ADD ESP,0x8                         ; 004bbed1
    TEST EAX,EAX                        ; 004bbed4
    JNZ 0x004bbe50                      ; 004bbed6
        ;   XREF to: 004bbe50 (CONDITIONAL_JUMP)  ; LAB_004bbe50
    ADD ESP,0xc                         ; 004bbedc
    POP EBP                             ; 004bbedf
    POP EDI                             ; 004bbee0
    POP ESI                             ; 004bbee1
    POP EBX                             ; 004bbee2
    RET                                 ; 004bbee3
    XOR EAX,EAX                         ; 004bbee4
        ;   Label: LAB_004bbee4
    ADD ESP,0xc                         ; 004bbee6
    POP EBP                             ; 004bbee9
    POP EDI                             ; 004bbeea
    POP ESI                             ; 004bbeeb
    POP EBX                             ; 004bbeec
    RET                                 ; 004bbeed
    INC EDI                             ; 004bbeee
        ;   Label: LAB_004bbeee
    CMP EDI,0x1                         ; 004bbeef
    JLE 0x004bbe6d                      ; 004bbef2
        ;   XREF to: 004bbe6d (CONDITIONAL_JUMP)  ; LAB_004bbe6d
    PUSH 0x5dfb7a                       ; 004bbef8 | = "ERROR: item won't fit<br>"
    PUSH EBX                            ; 004bbefd
    CALL core_fldnotes.cpp_FUN_004bb290 ; 004bbefe
        ;   XREF to: 004bb290 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bb290()
    ADD ESP,0x8                         ; 004bbf03
    INC dword ptr [ESP + 0x8]           ; 004bbf06
        ;   Label: LAB_004bbf06
    JMP 0x004bbd82                      ; 004bbf0a
        ;   XREF to: 004bbd82 (UNCONDITIONAL_JUMP)  ; LAB_004bbd82

