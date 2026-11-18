; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setSunlight_FUN_00534680(CDemonSet *this_ptr,float dir_x,float dir_y,float dir_z,float intensity)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   dir_x
; float            Stack[0xc]:4   dir_y
; float            Stack[0x10]:4   dir_z
; float            Stack[0x14]:4   intensity
;
; XREF[1]:
;   core_event.cpp_CEventList_executeCommand_FUN_00489670 at 0048d439
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00534680
        ;   Label: core_set.cpp_CDemonSet_setSunlight_FUN_00534680
    LEA EAX,[ESP + 0x8]                 ; 00534684
    LEA EDX,[ECX + 0x14d154]            ; 00534688
    CMP EDX,EAX                         ; 0053468e
    JNZ 0x0053469d                      ; 00534690
        ;   XREF to: 0053469d (CONDITIONAL_JUMP)  ; LAB_0053469d
    MOV EAX,dword ptr [ESP + 0x14]      ; 00534692
    MOV dword ptr [ECX + 0x14d160],EAX  ; 00534696
    RET                                 ; 0053469c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0053469d
        ;   Label: LAB_0053469d
    MOV dword ptr [EDX],EAX             ; 005346a1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005346a3
    MOV dword ptr [EDX + 0x4],EAX       ; 005346a7
    MOV EAX,dword ptr [ESP + 0x10]      ; 005346aa
    MOV dword ptr [EDX + 0x8],EAX       ; 005346ae
    MOV EAX,dword ptr [ESP + 0x14]      ; 005346b1
    MOV dword ptr [ECX + 0x14d160],EAX  ; 005346b5
    RET                                 ; 005346bb

