; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_FUN_00564500()
;
;
; XREF[3]:
;   core_script.cpp_CScript_Unk20_FUN_00565130 at 00565a55
;   core_script.cpp_CScript_editorAction_FUN_00564820 at 00564bd0
;   core_script.cpp_FUN_005645d0 at 005645e1
;
; Referenced Globals:
;   undefined4 DAT_0310fd44
;   undefined4 DAT_0310fd48
;   undefined4 DAT_0310fd4c
;   undefined4 DAT_0310fd50
;   undefined4 DAT_031141c0
;   undefined4 DAT_031141c4
;   undefined4 DAT_031141c8
;   undefined4 DAT_031141cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564500
        ;   Label: core_script.cpp_FUN_00564500
    PUSH ESI                            ; 00564501
    PUSH EDI                            ; 00564502
    PUSH EBP                            ; 00564503
    MOV ESI,dword ptr [0x0310fd50]      ; 00564504 | undefined4 DAT_0310fd50
    MOV EDI,dword ptr [0x0310fd4c]      ; 0056450a | undefined4 DAT_0310fd4c
    TEST EDI,EDI                        ; 00564510
    JL 0x0056449b                       ; 00564512 | LAB_0056449b
        ;   XREF to: 0056449b (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 00564514
    JL 0x0056449b                       ; 00564516 | LAB_0056449b
        ;   XREF to: 0056449b (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x0310fd48]      ; 00564518 | undefined4 DAT_0310fd48
    CMP ESI,ECX                         ; 0056451e
    JL 0x005644ab                       ; 00564520 | LAB_005644ab
        ;   XREF to: 005644ab (CONDITIONAL_JUMP)
    JG 0x005644ba                       ; 00564522 | LAB_005644ba
        ;   XREF to: 005644ba (CONDITIONAL_JUMP)
    MOV EAX,[0x0310fd44]                ; 00564524 | undefined4 DAT_0310fd44
    MOV EBP,ESI                         ; 00564529
    MOV ECX,ESI                         ; 0056452b
    CMP EDI,EAX                         ; 0056452d
    JGE 0x005644cb                      ; 0056452f | LAB_005644cb
        ;   XREF to: 005644cb (CONDITIONAL_JUMP)
    MOV EDX,EAX                         ; 00564531
    MOV EBX,EDI                         ; 00564533
    MOV dword ptr [0x031141c4],EBP      ; 00564535 | undefined4 DAT_031141c4
        ;   Label: LAB_00564535
    MOV dword ptr [0x0310fd4c],EDI      ; 0056453b | undefined4 DAT_0310fd4c
    MOV dword ptr [0x0310fd50],ESI      ; 00564541 | undefined4 DAT_0310fd50
    MOV dword ptr [0x031141c0],EBX      ; 00564547 | undefined4 DAT_031141c0
    MOV dword ptr [0x031141cc],ECX      ; 0056454d | undefined4 DAT_031141cc
    MOV dword ptr [0x031141c8],EDX      ; 00564553 | undefined4 DAT_031141c8
    POP EBP                             ; 00564559
    POP EDI                             ; 0056455a
    POP ESI                             ; 0056455b
    POP EBX                             ; 0056455c
    RET                                 ; 0056455d

