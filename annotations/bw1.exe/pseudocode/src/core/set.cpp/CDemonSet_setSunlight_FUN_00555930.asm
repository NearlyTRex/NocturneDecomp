; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setSunlight_FUN_00555930(CDemonSet *this_ptr,float dir_x,float dir_y,float dir_z,float intensity)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   dir_x
; float            Stack[0xc]:4   dir_y
; float            Stack[0x10]:4   dir_z
; float            Stack[0x14]:4   intensity
;
; XREF[1]:
;   core_event.cpp_CEventList_executeCommand_FUN_004a1d00 at 004a5cdf
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00555930
        ;   Label: core_set.cpp_CDemonSet_setSunlight_FUN_00555930
    LEA EAX,[ESP + 0x8]                 ; 00555934
    LEA EDX,[ECX + 0x14d154]            ; 00555938
    CMP EDX,EAX                         ; 0055593e
    JNZ 0x0055594d                      ; 00555940
        ;   XREF to: 0055594d (CONDITIONAL_JUMP)  ; LAB_0055594d
    MOV EAX,dword ptr [ESP + 0x14]      ; 00555942
    MOV dword ptr [ECX + 0x14d160],EAX  ; 00555946
    RET                                 ; 0055594c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0055594d
        ;   Label: LAB_0055594d
    MOV dword ptr [EDX],EAX             ; 00555951
    MOV EAX,dword ptr [ESP + 0xc]       ; 00555953
    MOV dword ptr [EDX + 0x4],EAX       ; 00555957
    MOV EAX,dword ptr [ESP + 0x10]      ; 0055595a
    MOV dword ptr [EDX + 0x8],EAX       ; 0055595e
    MOV EAX,dword ptr [ESP + 0x14]      ; 00555961
    MOV dword ptr [ECX + 0x14d160],EAX  ; 00555965
    RET                                 ; 0055596b

