; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_save_FUN_0048c850(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004a3b90 at 004a3d38
;
; Referenced Globals:
;   string s_Fire_state_00581530
;   undefined4 DAT_0058153c
;
; Called Functions:
;   core_fire.cpp_CCrater_save_FUN_00487e90
;   crt_stdio.c_fprintf_FUN_005644f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c850
        ;   Label: core_fire.cpp_CFireEffect_save_FUN_0048c850
    PUSH ESI                            ; 0048c851
    PUSH EDI                            ; 0048c852
    MOV ESI,dword ptr [ESP + 0x14]      ; 0048c853
    PUSH 0x581530                       ; 0048c857 | = "Fire state\n"
    PUSH ESI                            ; 0048c85c
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0048c85d
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 0048c862
    PUSH 0x58153c                       ; 0048c865 | DAT_0058153c
    MOV EBX,0x1c625f8                   ; 0048c86a
    PUSH ESI                            ; 0048c86f
    LEA EDI,[EBX + 0x8c0]               ; 0048c870
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0048c876
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 0048c87b
    PUSH ESI                            ; 0048c87e
        ;   Label: LAB_0048c87e
    PUSH EBX                            ; 0048c87f
    CALL core_fire.cpp_CCrater_save_FUN_00487e90 ; 0048c880
        ;   XREF to: 00487e90 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CCrater_save_FUN_00487e90()
    ADD EBX,0x70                        ; 0048c885
    ADD ESP,0x8                         ; 0048c888
    CMP EBX,EDI                         ; 0048c88b
    JNZ 0x0048c87e                      ; 0048c88d
        ;   XREF to: 0048c87e (CONDITIONAL_JUMP)  ; LAB_0048c87e
    POP EDI                             ; 0048c88f
    POP ESI                             ; 0048c890
    POP EBX                             ; 0048c891
    RET                                 ; 0048c892

