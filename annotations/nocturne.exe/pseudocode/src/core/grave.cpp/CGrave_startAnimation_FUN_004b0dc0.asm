; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_grave_cpp_CGrave_startAnimation_FUN_004b0dc0(int param_1)
;
;
; XREF[3]:
;   FUN_00543c50 at 00543d5d
;   core_grave.cpp_CGrave_process_FUN_004b0bf0 at 004b0c45
;   core_zombie.cpp_FUN_0055ef50 at 005600ad
;
; Referenced Globals:
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_00508890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0dc0
        ;   Label: core_grave.cpp_CGrave_startAnimation_FUN_004b0dc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b0dc1
    MOV EDX,dword ptr [EBX + 0x2d4]     ; 004b0dc5
    TEST EDX,EDX                        ; 004b0dcb
    JNZ 0x004b0e16                      ; 004b0dcd
        ;   XREF to: 004b0e16 (CONDITIONAL_JUMP)  ; LAB_004b0e16
    CMP dword ptr [EBX + 0x2d8],0x0     ; 004b0dcf
    JNZ 0x004b0e16                      ; 004b0dd6
        ;   XREF to: 004b0e16 (CONDITIONAL_JUMP)  ; LAB_004b0e16
    MOV dword ptr [EBX + 0x2d8],0x1     ; 004b0dd8
    MOV AH,byte ptr [EBX + 0x344]       ; 004b0de2
    MOV dword ptr [EBX + 0x2cc],EDX     ; 004b0de8
    TEST AH,AH                          ; 004b0dee
    JZ 0x004b0e06                       ; 004b0df0
        ;   XREF to: 004b0e06 (CONDITIONAL_JUMP)  ; LAB_004b0e06
    LEA EAX,[EBX + 0x344]               ; 004b0df2
    PUSH EAX                            ; 004b0df8
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004b0df9
    PUSH EBX                            ; 004b0dff
    CALL dword ptr [EDX + 0x24]         ; 004b0e00
    ADD ESP,0x8                         ; 004b0e03
    PUSH EBX                            ; 004b0e06
        ;   Label: LAB_004b0e06
    MOV EBX,dword ptr [0x005be368]      ; 004b0e07 | DAT_005be368
    PUSH EBX                            ; 004b0e0d | DAT_01e57284
    CALL core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_00508890 ; 004b0e0e
        ;   XREF to: 00508890 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_00508890()
    ADD ESP,0x8                         ; 004b0e13
    POP EBX                             ; 004b0e16
        ;   Label: LAB_004b0e16
    RET                                 ; 004b0e17

