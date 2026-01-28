; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stdcall void __stdcall crt_stack_c_ProbeStackSpace_FUN_005ffa2f(uint size)
;
; Parameters:
; uint             Stack[0x4]:4   size
;
; XREF[3]:
;   crt_process.c_spawnvp_FUN_0060f39c at 0060f5c9
;   crt_stack.c_check_stack_target_FUN_005ffa03 at 005ffa1c
;   crt_startup.cpp_WinMainBootstrap_FUN_00609e70 at 00609ecf
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005ffa2f
        ;   Label: crt_stack.c_ProbeStackSpace_FUN_005ffa2f
    PUSH EBX                            ; 005ffa30
    MOV EAX,dword ptr [ESP + 0xc]       ; 005ffa31
    MOV EBX,0xfffffffc                  ; 005ffa35
    MOV dword ptr [ESP + EBX*0x1],EBX   ; 005ffa3a
        ;   Label: LAB_005ffa3a
    SUB EBX,0x1000                      ; 005ffa3d
    SUB EAX,0x1000                      ; 005ffa43
    JG 0x005ffa3a                       ; 005ffa48
        ;   XREF to: 005ffa3a (CONDITIONAL_JUMP)  ; LAB_005ffa3a
    POP EBX                             ; 005ffa4a
    POP EAX                             ; 005ffa4b
    RET 0x4                             ; 005ffa4c

