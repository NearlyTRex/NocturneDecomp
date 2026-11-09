; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkaddr_0059d350_cpp_FUN_0059db70(int param_1)
;
;
; XREF[5]:
;   core_dog1.cpp_FUN_005ac2f0 at 005ac4f3
;   core_hag.cpp_FUN_005aad70 at 005aadae
;   unkafter_basicene.cpp_FUN_0059fae0 at 0059fbb6
;   unkafter_basicene.cpp_FUN_0059fc10 at 0059fedd
;   unkafter_basicene.cpp_FUN_005a0270 at 005a0344
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0059db70
        ;   Label: unkaddr_0059d350.cpp_FUN_0059db70
    MOV EDX,dword ptr [ECX + 0x840]     ; 0059db74
    DEC EDX                             ; 0059db7a
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059db7b
    SUB EAX,EDX                         ; 0059db82
    SHL EAX,0x3                         ; 0059db84
    ADD EAX,EDX                         ; 0059db87
    ADD EAX,ECX                         ; 0059db89
    RET                                 ; 0059db8b

