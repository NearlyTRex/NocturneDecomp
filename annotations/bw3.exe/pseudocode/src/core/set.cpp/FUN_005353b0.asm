; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_FUN_005353b0(CDemonSet *this_ptr,int clear_enabled,int is_clearing,int screen_height)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   clear_enabled
; int              Stack[0xc]:4   is_clearing
; int              Stack[0x10]:4   screen_height
;
; XREF[2]:
;   core_game.cpp_CGame_processHotkeys_FUN_004ba540 at 004ba707
;   core_game.cpp_FUN_004bb100 at 004bb5d9
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_init_FUN_00448d70
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 005353b0
        ;   Label: core_set.cpp_FUN_005353b0
    PUSH EDX                            ; 005353b4
    PUSH 0x2038f4c                      ; 005353b5
    CALL core_dcamera.cpp_CDemonCamera_init_FUN_00448d70 ; 005353ba
        ;   XREF to: 00448d70 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_init_FUN_00448d70(CDemonCamera * this_ptr, int screen_height)
    ADD ESP,0x8                         ; 005353bf
    MOV EAX,dword ptr [ESP + 0x4]       ; 005353c2
    MOV ECX,dword ptr [EAX + 0x15aeb8]  ; 005353c6
    PUSH ECX                            ; 005353cc
    PUSH EAX                            ; 005353cd
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_00534890 ; 005353ce
        ;   XREF to: 00534890 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_00534890(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 005353d3
    RET                                 ; 005353d6

