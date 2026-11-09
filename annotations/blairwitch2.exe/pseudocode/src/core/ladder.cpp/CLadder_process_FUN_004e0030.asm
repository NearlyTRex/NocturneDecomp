; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ladder_cpp_CLadder_process_FUN_004e0030(CLadder *this_ptr,float delta_time)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_ladder.cpp_FUN_004e0240
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e0030
        ;   Label: core_ladder.cpp_CLadder_process_FUN_004e0030
    PUSH EDX                            ; 004e0034
    CALL core_ladder.cpp_FUN_004e0240   ; 004e0035
        ;   XREF to: 004e0240 (UNCONDITIONAL_CALL)  ; void core_ladder.cpp_FUN_004e0240(CLadder * this_ptr)
    ADD ESP,0x4                         ; 004e003a
    RET                                 ; 004e003d

