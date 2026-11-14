; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_reinitCamera_FUN_0052e910(CDemonSet *this_ptr,int clear_enabled,int is_clearing,int screen_height)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   clear_enabled
; int              Stack[0xc]:4   is_clearing
; int              Stack[0x10]:4   screen_height
;
; XREF[2]:
;   core_game.cpp_FUN_004b82e0 at 004b84bd
;   core_game.cpp_FUN_004b90d0 at 004b957c
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_init_FUN_0043b570
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 0052e910
        ;   Label: core_set.cpp_CDemonSet_reinitCamera_FUN_0052e910
    PUSH EDX                            ; 0052e914
    PUSH 0x1fc7838                      ; 0052e915
    CALL core_dcamera.cpp_CDemonCamera_init_FUN_0043b570 ; 0052e91a
        ;   XREF to: 0043b570 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_init_FUN_0043b570(CDemonCamera * this_ptr, int screen_height)
    ADD ESP,0x8                         ; 0052e91f
    MOV EAX,dword ptr [ESP + 0x4]       ; 0052e922
    MOV ECX,dword ptr [EAX + 0x15aeb8]  ; 0052e926
    PUSH ECX                            ; 0052e92c
    PUSH EAX                            ; 0052e92d
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 ; 0052e92e
        ;   XREF to: 0052ddf0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 0052e933
    RET                                 ; 0052e936

