; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_actor_cpp_FUN_0040c990(CDemonActor *param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005caed6
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.field1364276_0x14d134
;   undefined4 g_CDemonCameraInstance.field4_0x4
;   undefined4 g_CDemonCameraInstance.field8_0x8
;   undefined4 g_CDemonCameraInstance.field12_0xc
;
; Called Functions:
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   core_setcolid.cpp_FUN_00534ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c990
        ;   Label: core_actor.cpp_FUN_0040c990
    PUSH ESI                            ; 0040c991
    PUSH EDI                            ; 0040c992
    PUSH EBP                            ; 0040c993
    SUB ESP,0x24                        ; 0040c994
    MOV EBP,dword ptr [ESP + 0x38]      ; 0040c997
    MOV EDI,ESP                         ; 0040c99b
    MOV ESI,0x1fc783c                   ; 0040c99d
    MOVSD ES:EDI,ESI                    ; 0040c9a2 | g_CDemonCameraInstance.field4_0x4
    MOVSD ES:EDI,ESI                    ; 0040c9a3 | g_CDemonCameraInstance.field8_0x8
    MOVSD ES:EDI,ESI                    ; 0040c9a4 | g_CDemonCameraInstance.field12_0xc
    LEA EDI,[ESP + 0xc]                 ; 0040c9a5
    MOV ESI,ESP                         ; 0040c9a9
    LEA EBX,[EBP + 0x20]                ; 0040c9ab
    MOVSD ES:EDI,ESI                    ; 0040c9ae
    MOVSD ES:EDI,ESI                    ; 0040c9af
    MOVSD ES:EDI,ESI                    ; 0040c9b0
    FLD float ptr [EBX]                 ; 0040c9b1
    FSUB float ptr [ESP + 0xc]          ; 0040c9b3
    FMUL ST0                            ; 0040c9b7
    FLD float ptr [EBX + 0x4]           ; 0040c9b9
    FSUB float ptr [ESP + 0x10]         ; 0040c9bc
    FMUL ST0                            ; 0040c9c0
    FLD float ptr [EBX + 0x8]           ; 0040c9c2
    FXCH                                ; 0040c9c5
    FADDP ST2,ST0                       ; 0040c9c7
    FSUB float ptr [ESP + 0x14]         ; 0040c9c9
    FMUL ST0                            ; 0040c9cd
    FADDP                               ; 0040c9cf
    FCOMP float ptr [0x005caed6]        ; 0040c9d1 | DAT_005caed6
    FNSTSW AX                           ; 0040c9d7
    SAHF                                ; 0040c9d9
    JBE 0x0040c9e6                      ; 0040c9da
        ;   XREF to: 0040c9e6 (CONDITIONAL_JUMP)  ; LAB_0040c9e6
    XOR EAX,EAX                         ; 0040c9dc
    ADD ESP,0x24                        ; 0040c9de
    POP EBP                             ; 0040c9e1
    POP EDI                             ; 0040c9e2
    POP ESI                             ; 0040c9e3
    POP EBX                             ; 0040c9e4
    RET                                 ; 0040c9e5
    PUSH EBP                            ; 0040c9e6
        ;   Label: LAB_0040c9e6
    MOV EDX,dword ptr [0x0061b5a8]      ; 0040c9e7 | g_CDemonSetPtr
    PUSH EDX                            ; 0040c9ed | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0040c9ee
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0040c9f3
    PUSH 0x0                            ; 0040c9f6
    PUSH EBX                            ; 0040c9f8
    MOV ECX,dword ptr [0x0061b5a8]      ; 0040c9f9 | g_CDemonSetPtr
    PUSH ECX                            ; 0040c9ff | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00534ea0 ; 0040ca00
        ;   XREF to: 00534ea0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00534ea0()
    ADD ESP,0xc                         ; 0040ca05
    MOV ESI,dword ptr [0x0061b5a8]      ; 0040ca08 | g_CDemonSetPtr
    PUSH ESI                            ; 0040ca0e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 0040ca0f
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    MOV EDX,dword ptr [0x0061b5a8]      ; 0040ca14 | g_CDemonSetPtr
    ADD ESP,0x4                         ; 0040ca1a
    MOV EDI,dword ptr [EDX + 0x14d134]  ; 0040ca1d | g_CDemonSetInstance.field1364276_0x14d134
    PUSH dword ptr [ESP + 0x3c]         ; 0040ca23
    PUSH EDI                            ; 0040ca27
    PUSH EBX                            ; 0040ca28
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 0040ca29
    PUSH EBP                            ; 0040ca2f
    CALL dword ptr [EAX + 0x30]         ; 0040ca30
    ADD ESP,0x10                        ; 0040ca33
    ADD ESP,0x24                        ; 0040ca36
    POP EBP                             ; 0040ca39
    POP EDI                             ; 0040ca3a
    POP ESI                             ; 0040ca3b
    POP EBX                             ; 0040ca3c
    RET                                 ; 0040ca3d

