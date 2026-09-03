; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ladder_cpp_CLadder_process_FUN_004c4360(CLadder *this_ptr,float delta_time)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_ladder.cpp_CLadder_updatePositionFromMaster_FUN_004c45a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c4360
        ;   Label: core_ladder.cpp_CLadder_process_FUN_004c4360
    PUSH EDX                            ; 004c4364
    CALL core_ladder.cpp_CLadder_updatePositionFromMaster_FUN_004c45a0 ; 004c4365
        ;   XREF to: 004c45a0 (UNCONDITIONAL_CALL)  ; void core_ladder.cpp_CLadder_updatePositionFromMaster_FUN_004c45a0(CLadder * this_ptr)
    ADD ESP,0x4                         ; 004c436a
    RET                                 ; 004c436d

