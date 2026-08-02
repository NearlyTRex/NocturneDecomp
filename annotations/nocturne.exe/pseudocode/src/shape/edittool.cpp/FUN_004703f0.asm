; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 shape_edittool_cpp_FUN_004703f0(undefined4 param_1,char *param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_Y_es_0057e65c
;   TerminatedCString s_Yes_to_A_ll_0057e662
;   TerminatedCString s_N_o_0057e66f
;   TerminatedCString s_C_ancel_0057e674
;   TerminatedCString s_yanc_0057e67d
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_00563a08
;   shape_edittool.cpp_CPickList_ctor_FUN_00474c90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
;   shape_edittool.cpp_CPickList_dtor_FUN_00474cf0
;   shape_edittool.cpp_CStrList_add_FUN_00473cb0
;   support_newmsg.cpp_getLocalizedString_FUN_004ee370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004703f0
        ;   Label: shape_edittool.cpp_FUN_004703f0
    PUSH ESI                            ; 004703f1
    PUSH EDI                            ; 004703f2
    SUB ESP,0x174                       ; 004703f3
    LEA EAX,[ESP + 0x18c]               ; 004703f9
    MOV dword ptr [ESP + 0x170],EAX     ; 00470400
    LEA EAX,[ESP + 0x170]               ; 00470407
    PUSH EAX                            ; 0047040e
    MOV EDX,dword ptr [ESP + 0x18c]     ; 0047040f
    PUSH EDX                            ; 00470416
    PUSH 0x1bcbcd0                      ; 00470417
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 0047041c
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_00563a08(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00470421
    MOV EAX,ESP                         ; 00470424
    XOR ECX,ECX                         ; 00470426
    PUSH EAX                            ; 00470428
    MOV dword ptr [ESP + 0x174],ECX     ; 00470429
    CALL shape_edittool.cpp_CPickList_ctor_FUN_00474c90 ; 00470430
        ;   XREF to: 00474c90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_00474c90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00470435
    PUSH 0x57e65c                       ; 00470438 | = "[Y]es"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0047043d
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 00470442
    PUSH EAX                            ; 00470445
    LEA EAX,[ESP + 0x4]                 ; 00470446
    PUSH EAX                            ; 0047044a
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 0047044b
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00470450
    PUSH 0x57e662                       ; 00470453 | = "Yes to [A]ll"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 00470458
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 0047045d
    PUSH EAX                            ; 00470460
    LEA EAX,[ESP + 0x4]                 ; 00470461
    PUSH EAX                            ; 00470465
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 00470466
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0047046b
    PUSH 0x57e66f                       ; 0047046e | = "[N]o"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 00470473
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 00470478
    PUSH EAX                            ; 0047047b
    LEA EAX,[ESP + 0x4]                 ; 0047047c
    PUSH EAX                            ; 00470480
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 00470481
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00470486
    PUSH 0x57e674                       ; 00470489 | = "[C]ancel"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0047048e
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 00470493
    PUSH EAX                            ; 00470496
    LEA EAX,[ESP + 0x4]                 ; 00470497
    PUSH EAX                            ; 0047049b
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 0047049c
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004704a1
    PUSH 0x57e67d                       ; 004704a4 | = "yanc"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004704a9
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004704ae
    LEA EDI,[ESP + 0x14]                ; 004704b1
    MOV ESI,EAX                         ; 004704b5
    PUSH EDI                            ; 004704b7
    MOV AL,byte ptr [ESI]               ; 004704b8
        ;   Label: LAB_004704b8
    MOV byte ptr [EDI],AL               ; 004704ba
    CMP AL,0x0                          ; 004704bc
    JZ 0x004704d0                       ; 004704be
        ;   XREF to: 004704d0 (CONDITIONAL_JUMP)  ; LAB_004704d0
    MOV AL,byte ptr [ESI + 0x1]         ; 004704c0
    ADD ESI,0x2                         ; 004704c3
    MOV byte ptr [EDI + 0x1],AL         ; 004704c6
    ADD EDI,0x2                         ; 004704c9
    CMP AL,0x0                          ; 004704cc
    JNZ 0x004704b8                      ; 004704ce
        ;   XREF to: 004704b8 (CONDITIONAL_JUMP)  ; LAB_004704b8
    POP EDI                             ; 004704d0
        ;   Label: LAB_004704d0
    PUSH -0x1                           ; 004704d1
    PUSH 0x1bcbcd0                      ; 004704d3
    LEA EAX,[ESP + 0x8]                 ; 004704d8
    PUSH EAX                            ; 004704dc
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70 ; 004704dd
        ;   XREF to: 00474d70 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70()
    ADD ESP,0xc                         ; 004704e2
    TEST EAX,EAX                        ; 004704e5
    JZ 0x0047050f                       ; 004704e7
        ;   XREF to: 0047050f (CONDITIONAL_JUMP)  ; LAB_0047050f
    CMP EAX,0x1                         ; 004704e9
    JZ 0x0047051c                       ; 004704ec
        ;   XREF to: 0047051c (CONDITIONAL_JUMP)  ; LAB_0047051c
    CMP EAX,0x2                         ; 004704ee
    JNZ 0x0047052a                      ; 004704f1
        ;   XREF to: 0047052a (CONDITIONAL_JUMP)  ; LAB_0047052a
    XOR EBX,EBX                         ; 004704f3
    PUSH EBX                            ; 004704f5
    LEA EAX,[ESP + 0x4]                 ; 004704f6
    PUSH EAX                            ; 004704fa
    CALL shape_edittool.cpp_CPickList_dtor_FUN_00474cf0 ; 004704fb
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_00474cf0(CPickList * this_ptr, uint flags)
        ;   Label: LAB_004704fb
    ADD ESP,0x8                         ; 00470500
    MOV EAX,EBX                         ; 00470503
    ADD ESP,0x174                       ; 00470505
    POP EDI                             ; 0047050b
    POP ESI                             ; 0047050c
    POP EBX                             ; 0047050d
    RET                                 ; 0047050e
    PUSH EAX                            ; 0047050f
        ;   Label: LAB_0047050f
    LEA EAX,[ESP + 0x4]                 ; 00470510
    PUSH EAX                            ; 00470514
    MOV EBX,0x1                         ; 00470515
    JMP 0x004704fb                      ; 0047051a
        ;   XREF to: 004704fb (UNCONDITIONAL_JUMP)  ; LAB_004704fb
    PUSH 0x0                            ; 0047051c
        ;   Label: LAB_0047051c
    LEA EAX,[ESP + 0x4]                 ; 0047051e
    PUSH EAX                            ; 00470522
    MOV EBX,0x2                         ; 00470523
    JMP 0x004704fb                      ; 00470528
        ;   XREF to: 004704fb (UNCONDITIONAL_JUMP)  ; LAB_004704fb
    PUSH 0x0                            ; 0047052a
        ;   Label: LAB_0047052a
    LEA EAX,[ESP + 0x4]                 ; 0047052c
    PUSH EAX                            ; 00470530
    MOV EBX,0xffffffff                  ; 00470531
    CALL shape_edittool.cpp_CPickList_dtor_FUN_00474cf0 ; 00470536
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_00474cf0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047053b
    MOV EAX,EBX                         ; 0047053e
    ADD ESP,0x174                       ; 00470540
    POP EDI                             ; 00470546
    POP ESI                             ; 00470547
    POP EBX                             ; 00470548
    RET                                 ; 00470549

