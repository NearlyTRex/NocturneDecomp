; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_doc_cpp_dotProduct_FUN_0045e010(CVector3f *a,CVector3f *b)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   a
; CVector3f *      Stack[0x8]:4   b
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0045e010
        ;   Label: core_doc.cpp_dotProduct_FUN_0045e010
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045e013
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045e017
    FLD float ptr [EDX + 0x4]           ; 0045e01b
    FMUL float ptr [EAX + 0x4]          ; 0045e01e
    FLD float ptr [EDX]                 ; 0045e021
    FMUL float ptr [EAX]                ; 0045e023
    FADDP                               ; 0045e025
    FLD float ptr [EDX + 0x8]           ; 0045e027
    FMUL float ptr [EAX + 0x8]          ; 0045e02a
    FADDP                               ; 0045e02d
    FSTP float ptr [ESP]                ; 0045e02f
    MOV EAX,dword ptr [ESP]             ; 0045e032
    ADD ESP,0x4                         ; 0045e035
    RET                                 ; 0045e038

