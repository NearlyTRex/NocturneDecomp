; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * shape_multicrm.cpp_CMultiCram_getModels_FUN_0053ee00(CMultiCram * this_ptr, CDSEModel * * dest_array)
;
; Parameters:
; CMultiCram *     Stack[0x4]:4   this_ptr
; CDSEModel * *    Stack[0x8]:4   dest_array
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ee00
        ;   Label: shape_multicrm.cpp_CMultiCram_getModels_FUN_0053ee00
    MOV ECX,dword ptr [ESP + 0xc]       ; 0053ee01
    MOV EAX,dword ptr [ESP + 0x8]       ; 0053ee05
    ADD EAX,0x4                         ; 0053ee09
    MOV EDX,dword ptr [EAX]             ; 0053ee0c
    LEA EBX,[EAX + 0x4]                 ; 0053ee0e
    MOV dword ptr [ECX],EDX             ; 0053ee11
    LEA EDX,[ECX + 0x4]                 ; 0053ee13
    MOV EBX,dword ptr [EBX]             ; 0053ee16
    MOV dword ptr [EDX],EBX             ; 0053ee18
    MOV EAX,dword ptr [EAX + 0x8]       ; 0053ee1a
    MOV dword ptr [EDX + 0x4],EAX       ; 0053ee1d
    MOV EAX,ECX                         ; 0053ee20
    POP EBX                             ; 0053ee22
    RET                                 ; 0053ee23

