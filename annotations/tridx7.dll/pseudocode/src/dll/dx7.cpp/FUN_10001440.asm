; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void dll_dx7_cpp_FUN_10001440(LPCSTR param_1,LPCSTR param_2,UINT *param_3)
;
;
; XREF[1]:
;   dll_dx7.cpp_FUN_10001200 at 100012eb
;
; Referenced Globals:
;   TerminatedCString s_system_render_ini_10014068
;   void* PTR_GetPrivateProfileIntA_10242208 = 002422a0
;
; Called Functions:
;   GetPrivateProfileIntA
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x8]       ; 10001440
        ;   Label: dll_dx7.cpp_FUN_10001440
    PUSH ESI                            ; 10001444
    MOV ESI,dword ptr [ESP + 0x10]      ; 10001445
    PUSH 0x10014068                     ; 10001449 | = ".\\system\\render.ini"
    MOV EDX,dword ptr [ESP + 0xc]       ; 1000144e
    MOV EAX,dword ptr [ESI]             ; 10001452
    PUSH EAX                            ; 10001454
    PUSH ECX                            ; 10001455
    PUSH EDX                            ; 10001456
    CALL dword ptr [0x10242208]         ; 10001457 | PTR_GetPrivateProfileIntA_10242208
    MOV dword ptr [ESI],EAX             ; 1000145d
    POP ESI                             ; 1000145f
    RET                                 ; 10001460

