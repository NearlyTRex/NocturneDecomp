; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_disease_cpp_staticInit_FUN_0045c160(void)
;
;
; Referenced Globals:
;   CVector3f g_CVector3f_01b4b6a8
;   undefined4 g_CVector3f_01b4b6a8.y
;   undefined4 g_CVector3f_01b4b6a8.z
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0045c160
        ;   Label: core_disease.cpp_staticInit_FUN_0045c160
    MOV dword ptr [0x01b4b6ac],EDX      ; 0045c162 | g_CVector3f_01b4b6a8.y
    MOV dword ptr [0x01b4b6b0],EDX      ; 0045c168 | g_CVector3f_01b4b6a8.z
    MOV dword ptr [0x01b4b6a8],EDX      ; 0045c16e | g_CVector3f_01b4b6a8
    RET                                 ; 0045c174

