; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ladder_cpp_CLadder_process_FUN_00502610(CLadder *this_ptr,float delta_time)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_ladder.cpp_CLadder_updatePositionFromMaster_FUN_00502a70
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00502610
        ;   Label: core_ladder.cpp_CLadder_process_FUN_00502610
    PUSH EDX                            ; 00502614
    CALL core_ladder.cpp_CLadder_updatePositionFromMaster_FUN_00502a70 ; 00502615
        ;   XREF to: 00502a70 (UNCONDITIONAL_CALL)  ; void core_ladder.cpp_CLadder_updatePositionFromMaster_FUN_00502a70(CLadder * this_ptr)
    ADD ESP,0x4                         ; 0050261a
    RET                                 ; 0050261d

