; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setSunlight_FUN_0053b2c0(CDemonSet *this_ptr,float dir_x,float dir_y,float dir_z,float intensity)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   dir_x
; float            Stack[0xc]:4   dir_y
; float            Stack[0x10]:4   dir_z
; float            Stack[0x14]:4   intensity
;
; XREF[1]:
;   core_event.cpp_CEventList_executeCommand_FUN_0048c2e0 at 004905dd
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0053b2c0
        ;   Label: core_set.cpp_CDemonSet_setSunlight_FUN_0053b2c0
    LEA EAX,[ESP + 0x8]                 ; 0053b2c4
    LEA EDX,[ECX + 0x14d154]            ; 0053b2c8
    CMP EDX,EAX                         ; 0053b2ce
    JNZ 0x0053b2dd                      ; 0053b2d0
        ;   XREF to: 0053b2dd (CONDITIONAL_JUMP)  ; LAB_0053b2dd
    MOV EAX,dword ptr [ESP + 0x14]      ; 0053b2d2
    MOV dword ptr [ECX + 0x14d160],EAX  ; 0053b2d6
    RET                                 ; 0053b2dc
    MOV EAX,dword ptr [ESP + 0x8]       ; 0053b2dd
        ;   Label: LAB_0053b2dd
    MOV dword ptr [EDX],EAX             ; 0053b2e1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0053b2e3
    MOV dword ptr [EDX + 0x4],EAX       ; 0053b2e7
    MOV EAX,dword ptr [ESP + 0x10]      ; 0053b2ea
    MOV dword ptr [EDX + 0x8],EAX       ; 0053b2ee
    MOV EAX,dword ptr [ESP + 0x14]      ; 0053b2f1
    MOV dword ptr [ECX + 0x14d160],EAX  ; 0053b2f5
    RET                                 ; 0053b2fb

