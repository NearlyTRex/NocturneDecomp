; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_trigger_cpp_CTrigger_ctor_FUN_005478b0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005524d0 at 005524d5
;
; Referenced Globals:
;   string s_nobody_00596988
;   undefined4 s_obody_00596988+1
;   undefined4 s_body_00596988+2
;   undefined4 s_ody_00596988+3
;   string s_CDemonActor_0059698f
;   undefined4 s_DemonActor_0059698f+1
;   undefined4 s_emonActor_0059698f+2
;   undefined4 s_monActor_0059698f+3
;   undefined1* PTR_core_trigger.cpp_CTrigger_setup_FUN_00547a00_005a3664 = 00547a00
;
; Called Functions:
;   FUN_00409d30
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005478b0
        ;   Label: core_trigger.cpp_CTrigger_ctor_FUN_005478b0
    PUSH EDI                            ; 005478b1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005478b2
    PUSH EDX                            ; 005478b6
    CALL FUN_00409d30                   ; 005478b7
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d30()
    MOV dword ptr [EAX + 0x14c],0x5a3664 ; 005478bc | PTR_core_trigger.cpp_CTrigger_setup_FUN_00547a00_005a3664
    MOV dword ptr [EAX + 0x158],0x40a00000 ; 005478c6
    MOV dword ptr [EAX + 0x15c],0x41100000 ; 005478d0
    MOV dword ptr [EAX + 0x160],0x40a00000 ; 005478da
    MOV dword ptr [EAX + 0x168],0x0     ; 005478e4
    MOV dword ptr [EAX + 0x154],0x0     ; 005478ee
    MOV ESI,0x596988                    ; 005478f8 | = "nobody"
    MOV byte ptr [EAX + 0x21c],0x0      ; 005478fd
    MOV EDX,EAX                         ; 00547904
    MOV byte ptr [EAX + 0x280],0x0      ; 00547906
    ADD ESP,0x4                         ; 0054790d
    MOV dword ptr [EAX + 0x164],0x0     ; 00547910
    LEA EDI,[EAX + 0x170]               ; 0054791a
    MOV dword ptr [EAX + 0x16c],0x0     ; 00547920
    PUSH EDI                            ; 0054792a
    MOV AL,byte ptr [ESI]               ; 0054792b | = "nobody" | s_body_00596988+2
        ;   Label: LAB_0054792b
    MOV byte ptr [EDI],AL               ; 0054792d
    CMP AL,0x0                          ; 0054792f
    JZ 0x00547943                       ; 00547931
        ;   XREF to: 00547943 (CONDITIONAL_JUMP)  ; LAB_00547943
    MOV AL,byte ptr [ESI + 0x1]         ; 00547933 | s_obody_00596988+1 | s_ody_00596988+3
    ADD ESI,0x2                         ; 00547936
    MOV byte ptr [EDI + 0x1],AL         ; 00547939
    ADD EDI,0x2                         ; 0054793c
    CMP AL,0x0                          ; 0054793f
    JNZ 0x0054792b                      ; 00547941
        ;   XREF to: 0054792b (CONDITIONAL_JUMP)  ; LAB_0054792b
    POP EDI                             ; 00547943
        ;   Label: LAB_00547943
    MOV ESI,0x59698f                    ; 00547944 | = "CDemonActor"
    LEA EDI,[EDX + 0x1c0]               ; 00547949
    PUSH EDI                            ; 0054794f
    MOV AL,byte ptr [ESI]               ; 00547950 | = "CDemonActor" | s_emonActor_0059698f+2
        ;   Label: LAB_00547950
    MOV byte ptr [EDI],AL               ; 00547952
    CMP AL,0x0                          ; 00547954
    JZ 0x00547968                       ; 00547956
        ;   XREF to: 00547968 (CONDITIONAL_JUMP)  ; LAB_00547968
    MOV AL,byte ptr [ESI + 0x1]         ; 00547958 | s_DemonActor_0059698f+1 | s_monActor_0059698f+3
    ADD ESI,0x2                         ; 0054795b
    MOV byte ptr [EDI + 0x1],AL         ; 0054795e
    ADD EDI,0x2                         ; 00547961
    CMP AL,0x0                          ; 00547964
    JNZ 0x00547950                      ; 00547966
        ;   XREF to: 00547950 (CONDITIONAL_JUMP)  ; LAB_00547950
    POP EDI                             ; 00547968
        ;   Label: LAB_00547968
    MOV dword ptr [EDX + 0x210],0x0     ; 00547969
    MOV dword ptr [EDX + 0x214],0x3e800000 ; 00547973
    MOV dword ptr [EDX + 0x218],0x3f800000 ; 0054797d
    MOV dword ptr [EDX + 0x2e4],0x0     ; 00547987
    MOV dword ptr [EDX + 0x2e8],0x0     ; 00547991
    MOV dword ptr [EDX + 0x2ec],0x1     ; 0054799b
    MOV dword ptr [EDX + 0x2f0],0x42c80000 ; 005479a5
    MOV dword ptr [EDX + 0x64],0x96     ; 005479af
    MOV dword ptr [EDX + 0x360],0x0     ; 005479b6
    MOV dword ptr [EDX + 0x2f4],0x0     ; 005479c0
    MOV dword ptr [EDX + 0x150],0x47c34ff3 ; 005479ca
    MOV dword ptr [EDX + 0x2f8],0x1     ; 005479d4
    MOV byte ptr [EDX + 0x2fc],0x0      ; 005479de
    MOV EAX,EDX                         ; 005479e5
    MOV dword ptr [EDX + 0x364],0x0     ; 005479e7
    POP EDI                             ; 005479f1
    POP ESI                             ; 005479f2
    RET                                 ; 005479f3

