; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * unkafter_morph_cpp_FUN_005c4070(void)
;
;
; XREF[2]:
;   crt_startup.cpp_WinMainBootstrap_FUN_005c2020 at 005c2075
;   crt_unknown.c_FUN_005c045c at 005c05d0
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4 = 005bcdfc
;
; Called Functions:
;   crt_unknown.c_FUN_005bcdfc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4070
        ;   Label: unkafter_morph.cpp_FUN_005c4070
    CALL dword ptr [0x0061f2a4]         ; 005c4071 | PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4
    MOV EBX,EAX                         ; 005c4077
    MOV EAX,ESP                         ; 005c4079
    SUB EAX,dword ptr [EBX]             ; 005c407b
    POP EBX                             ; 005c407d
    RET                                 ; 005c407e

