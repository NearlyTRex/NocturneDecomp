; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_005caac4(undefined4 *param_1)
;
;
; XREF[8]:
;   unkafter_zombie.cpp_FUN_005caa60 at 005caaa5
;   unkafter_zombie.cpp_FUN_005caafc at 005cab01
;   unkafter_zombie.cpp_FUN_005cab28 at 005cab38
;   unkafter_zombie.cpp_FUN_005cab8c at 005cab91
;   unkafter_zombie.cpp_FUN_005cabac at 005cabb1
;   unkafter_zombie.cpp_FUN_005cabcc at 005cabd1
;   unkafter_zombie.cpp_FUN_005cabec at 005cabf1
;   unkafter_zombie.cpp_FUN_005cadb4 at 005cae0e
;
; Referenced Globals:
;   void* PTR_LeaveCriticalSection_005d05f4 = 001d1036
;
; Called Functions:
;   LeaveCriticalSection
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005caac4
        ;   Label: unkafter_zombie.cpp_FUN_005caac4
    PUSH ESI                            ; 005caac5
    MOV EAX,dword ptr [ESP + 0xc]       ; 005caac6
    MOV EDX,dword ptr [EAX + 0xc]       ; 005caaca
    TEST EDX,EDX                        ; 005caacd
    JBE 0x005caae8                      ; 005caacf
        ;   XREF to: 005caae8 (CONDITIONAL_JUMP)  ; LAB_005caae8
    LEA EBX,[EDX + -0x1]                ; 005caad1
    MOV dword ptr [EAX + 0xc],EBX       ; 005caad4
    TEST EBX,EBX                        ; 005caad7
    JNZ 0x005caae8                      ; 005caad9
        ;   XREF to: 005caae8 (CONDITIONAL_JUMP)  ; LAB_005caae8
    MOV ESI,dword ptr [EAX]             ; 005caadb
    PUSH ESI                            ; 005caadd
    MOV dword ptr [EAX + 0x8],EBX       ; 005caade
    CALL dword ptr CS:[0x5d05f4]        ; 005caae1 | PTR_LeaveCriticalSection_005d05f4
    POP ESI                             ; 005caae8
        ;   Label: LAB_005caae8
    POP EBX                             ; 005caae9
    RET                                 ; 005caaea

