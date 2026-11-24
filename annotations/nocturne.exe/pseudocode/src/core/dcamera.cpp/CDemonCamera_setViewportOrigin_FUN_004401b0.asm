; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_setViewportOrigin_FUN_004401b0(CDemonCamera *this_ptr,int viewport_x,int viewport_y)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   viewport_x
; int              Stack[0xc]:4   viewport_y
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0043ff50 at 0043ff8f
;   core_set.cpp_CDemonSet_reinitCamera_FUN_005090f0 at 00509113
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004401b0
        ;   Label: core_dcamera.cpp_CDemonCamera_setViewportOrigin_FUN_004401b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004401b4
    MOV dword ptr [EAX + 0x144],EDX     ; 004401b8
    MOV EDX,dword ptr [ESP + 0xc]       ; 004401be
    MOV dword ptr [EAX + 0x148],EDX     ; 004401c2
    RET                                 ; 004401c8

