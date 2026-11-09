; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ladder_cpp_CLadder_process_FUN_004fd400(CLadder *this_ptr,float delta_time)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_ladder.cpp_FUN_004fd610
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004fd400
        ;   Label: core_ladder.cpp_CLadder_process_FUN_004fd400
    PUSH EDX                            ; 004fd404
    CALL core_ladder.cpp_FUN_004fd610   ; 004fd405
        ;   XREF to: 004fd610 (UNCONDITIONAL_CALL)  ; void core_ladder.cpp_FUN_004fd610(CLadder * this_ptr)
    ADD ESP,0x4                         ; 004fd40a
    RET                                 ; 004fd40d

