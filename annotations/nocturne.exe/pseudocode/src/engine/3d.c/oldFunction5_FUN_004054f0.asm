; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * engine_3d_c_oldFunction5_FUN_004054f0(undefined4 *param_1)
;
; Local Variables:
; undefined        Stack[-0x54]:1  local_54
;
; Referenced Globals:
;   string s_Old_func_:_%d_005774c8
;   string s_..\\engine\\3d.c_005774d6
;   undefined4 DAT_006b0288
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004054f0
        ;   Label: engine_3d.c_oldFunction5_FUN_004054f0
    SUB ESP,0x50                        ; 004054f1
    MOV EAX,dword ptr [ESP + 0x58]      ; 004054f4
    MOV EDX,dword ptr [EAX]             ; 004054f8
    PUSH EDX                            ; 004054fa
    PUSH 0x5774c8                       ; 004054fb | = "Old func : %d"
    LEA EAX,[ESP + 0x8]                 ; 00405500
    PUSH EAX                            ; 00405504
    MOV EBX,0xd9                        ; 00405505
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0040550a
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 0040550f
    MOV EAX,ESP                         ; 00405512
    MOV ECX,0x5774d6                    ; 00405514 | = "..\\engine\\3d.c"
    PUSH EAX                            ; 00405519
    MOV dword ptr [0x01cc4804],EBX      ; 0040551a | DAT_01cc4804
    MOV dword ptr [0x01cc4800],ECX      ; 00405520 | DAT_01cc4800
    CALL FUN_004c8440                   ; 00405526
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    MOV EAX,0x6b0288                    ; 0040552b | DAT_006b0288
    ADD ESP,0x4                         ; 00405530
    ADD ESP,0x50                        ; 00405533
    POP EBX                             ; 00405536
    RET                                 ; 00405537

