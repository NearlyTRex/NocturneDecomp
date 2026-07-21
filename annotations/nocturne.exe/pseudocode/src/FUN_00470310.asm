; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00470310(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_00563a08
;   FUN_00474c90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
;   shape_edittool.cpp_CPickList_dtor_FUN_00474cf0
;   shape_edittool.cpp_CStrList_add_FUN_00473cb0
;   support_newmsg.cpp_getLocalizedString_FUN_004ee370
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00470310
        ;   Label: FUN_00470310
    PUSH EDI                            ; 00470311
    SUB ESP,0x174                       ; 00470312
    LEA EAX,[ESP + 0x188]               ; 00470318
    MOV dword ptr [ESP + 0x170],EAX     ; 0047031f
    LEA EAX,[ESP + 0x170]               ; 00470326
    PUSH EAX                            ; 0047032d
    MOV EDX,dword ptr [ESP + 0x188]     ; 0047032e
    PUSH EDX                            ; 00470335
    PUSH 0x1bcb8d0                      ; 00470336
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 0047033b
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_00563a08()
    ADD ESP,0xc                         ; 00470340
    MOV EAX,ESP                         ; 00470343
    XOR ECX,ECX                         ; 00470345
    PUSH EAX                            ; 00470347
    MOV dword ptr [ESP + 0x174],ECX     ; 00470348
    CALL FUN_00474c90                   ; 0047034f
        ;   XREF to: 00474c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00474c90()
    ADD ESP,0x4                         ; 00470354
    PUSH 0x57e64e                       ; 00470357
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0047035c
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 00470361
    PUSH EAX                            ; 00470364
    LEA EAX,[ESP + 0x4]                 ; 00470365
    PUSH EAX                            ; 00470369
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 0047036a
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_add_FUN_00473cb0()
    ADD ESP,0x8                         ; 0047036f
    PUSH 0x57e654                       ; 00470372
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 00470377
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 0047037c
    PUSH EAX                            ; 0047037f
    LEA EAX,[ESP + 0x4]                 ; 00470380
    PUSH EAX                            ; 00470384
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 00470385
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_add_FUN_00473cb0()
    ADD ESP,0x8                         ; 0047038a
    PUSH 0x57e659                       ; 0047038d
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 00470392
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 00470397
    LEA EDI,[ESP + 0x14]                ; 0047039a
    MOV ESI,EAX                         ; 0047039e
    PUSH EDI                            ; 004703a0
    MOV AL,byte ptr [ESI]               ; 004703a1
        ;   Label: LAB_004703a1
    MOV byte ptr [EDI],AL               ; 004703a3
    CMP AL,0x0                          ; 004703a5
    JZ 0x004703b9                       ; 004703a7
        ;   XREF to: 004703b9 (CONDITIONAL_JUMP)  ; LAB_004703b9
    MOV AL,byte ptr [ESI + 0x1]         ; 004703a9
    ADD ESI,0x2                         ; 004703ac
    MOV byte ptr [EDI + 0x1],AL         ; 004703af
    ADD EDI,0x2                         ; 004703b2
    CMP AL,0x0                          ; 004703b5
    JNZ 0x004703a1                      ; 004703b7
        ;   XREF to: 004703a1 (CONDITIONAL_JUMP)  ; LAB_004703a1
    POP EDI                             ; 004703b9
        ;   Label: LAB_004703b9
    PUSH -0x1                           ; 004703ba
    PUSH 0x1bcb8d0                      ; 004703bc
    LEA EAX,[ESP + 0x8]                 ; 004703c1
    PUSH EAX                            ; 004703c5
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70 ; 004703c6
        ;   XREF to: 00474d70 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70()
    ADD ESP,0xc                         ; 004703cb
    TEST EAX,EAX                        ; 004703ce
    SETZ AL                             ; 004703d0
    PUSH 0x0                            ; 004703d3
    MOVZX EDI,AL                        ; 004703d5
    LEA EAX,[ESP + 0x4]                 ; 004703d8
    PUSH EAX                            ; 004703dc
    CALL shape_edittool.cpp_CPickList_dtor_FUN_00474cf0 ; 004703dd
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_dtor_FUN_00474cf0()
    ADD ESP,0x8                         ; 004703e2
    MOV EAX,EDI                         ; 004703e5
    ADD ESP,0x174                       ; 004703e7
    POP EDI                             ; 004703ed
    POP ESI                             ; 004703ee
    RET                                 ; 004703ef

