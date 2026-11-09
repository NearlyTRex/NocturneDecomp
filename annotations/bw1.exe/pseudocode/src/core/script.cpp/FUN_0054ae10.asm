; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_script_cpp_FUN_0054ae10(CScript *param_1)
;
;
; XREF[2]:
;   core_game.cpp_CGame_processHotkeys_FUN_004d1a80 at 004d23c1
;   core_script.cpp_FUN_0054ae40 at 0054ae5d
;
; Called Functions:
;   core_script.cpp_FUN_0054aca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054ae10
        ;   Label: core_script.cpp_FUN_0054ae10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054ae11
    MOV EDX,dword ptr [EBX + 0x4]       ; 0054ae15
    PUSH EDX                            ; 0054ae18
    PUSH EBX                            ; 0054ae19
    CALL core_script.cpp_FUN_0054aca0   ; 0054ae1a
        ;   XREF to: 0054aca0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_FUN_0054aca0(CScript * this_ptr, CDemonActor * actor)
    MOV dword ptr [EBX + 0x48],0x0      ; 0054ae1f
    ADD ESP,0x8                         ; 0054ae26
    MOV dword ptr [EBX + 0x4c],0x0      ; 0054ae29
    POP EBX                             ; 0054ae30
    RET                                 ; 0054ae31

