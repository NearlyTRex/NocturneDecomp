; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_FUN_0054fbf0(CDemonSet *this_ptr,int clear_enabled,int is_clearing,int screen_height)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   clear_enabled
; int              Stack[0xc]:4   is_clearing
; int              Stack[0x10]:4   screen_height
;
; XREF[2]:
;   core_game.cpp_CGame_processHotkeys_FUN_004d1a80 at 004d1c49
;   core_game.cpp_FUN_004d27b0 at 004d2c9f
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_init_FUN_0044cc30
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 0054fbf0
        ;   Label: core_set.cpp_FUN_0054fbf0
    PUSH EDX                            ; 0054fbf4
    PUSH 0x1fe37ec                      ; 0054fbf5
    CALL core_dcamera.cpp_CDemonCamera_init_FUN_0044cc30 ; 0054fbfa
        ;   XREF to: 0044cc30 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_init_FUN_0044cc30(CDemonCamera * this_ptr, int screen_height)
    ADD ESP,0x8                         ; 0054fbff
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054fc02
    MOV ECX,dword ptr [EAX + 0x15aeb8]  ; 0054fc06
    PUSH ECX                            ; 0054fc0c
    PUSH EAX                            ; 0054fc0d
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 ; 0054fc0e
        ;   XREF to: 0054f0d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 0054fc13
    RET                                 ; 0054fc16

