; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_gabriela.cpp_staticInit_FUN_004d2910(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CGabriella_0062ac6d
;   undefined4 DAT_0065e7d0
;   undefined4 DAT_0065e7d4
;   undefined4 DAT_0065e7d8
;   undefined4 DAT_0065e7dc
;   undefined4 DAT_0065e7e0
;   undefined4 DAT_0065e7e4
;   int g_CGabriellaClassVersion = 0x3
;   undefined4 DAT_02d7b808
;   undefined4 DAT_02d7b80c
;   undefined4 DAT_02d7b810
;   undefined4 DAT_02d7b814
;   undefined4 DAT_02d7b818
;   undefined4 DAT_02d7b81c
;   undefined4 DAT_02d7b820
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2910
        ;   Label: core_gabriela.cpp_staticInit_FUN_004d2910
    PUSH ESI                            ; 004d2911
    PUSH EDI                            ; 004d2912
    PUSH EBP                            ; 004d2913
    FLD float ptr [0x0065e7d0]          ; 004d2914 | DAT_0065e7d0
    FMUL float ptr [0x0065e7d4]         ; 004d291a | DAT_0065e7d4
    FLD float ptr [0x0065e7d8]          ; 004d2920 | DAT_0065e7d8
    FMUL float ptr [0x0065e7dc]         ; 004d2926 | DAT_0065e7dc
    FLD float ptr [0x0065e7e0]          ; 004d292c | DAT_0065e7e0
    FMUL float ptr [0x0065e7e4]         ; 004d2932 | DAT_0065e7e4
    MOV EDX,0x3f028f5c                  ; 004d2938
    MOV ECX,0xbca3d70a                  ; 004d293d
    MOV EBX,0x3db851ec                  ; 004d2942
    MOV ESI,0x3e4ccccd                  ; 004d2947
    MOV EDI,0xbea147ae                  ; 004d294c
    PUSH 0x2db87d4                      ; 004d2951 | g_CHeroClassInfo
    MOV EAX,0x3fc90fdb                  ; 004d2956
    XOR EBP,EBP                         ; 004d295b
    PUSH 0x3                            ; 004d295d
    MOV dword ptr [0x02d7b814],EDX      ; 004d295f | DAT_02d7b814
    MOV dword ptr [0x02d7b818],ECX      ; 004d2965 | DAT_02d7b818
    MOV dword ptr [0x02d7b81c],EBX      ; 004d296b | DAT_02d7b81c
    MOV dword ptr [0x02d7b820],ESI      ; 004d2971 | DAT_02d7b820
    MOV dword ptr [0x02d7b824],EDI      ; 004d2977 | DAT_02d7b824
    MOV dword ptr [0x02d7b828],EBP      ; 004d297d | DAT_02d7b828
    MOV [0x02d7b82c],EAX                ; 004d2983 | DAT_02d7b82c
    MOV dword ptr [0x02d7b830],EBP      ; 004d2988 | DAT_02d7b830
    MOV dword ptr [0x02d7b840],EBP      ; 004d298e | DAT_02d7b840
    FXCH ST2                            ; 004d2994
    FSTP float ptr [0x02d7b808]         ; 004d2996 | DAT_02d7b808
    FSTP float ptr [0x02d7b80c]         ; 004d299c | DAT_02d7b80c
    PUSH 0x67b5a4                       ; 004d29a2 | g_CGabriellaClassVersion
    FSTP float ptr [0x02d7b810]         ; 004d29a7 | DAT_02d7b810
    PUSH 0x4d2ae0                       ; 004d29ad
    MOV ECX,0x3eb33333                  ; 004d29b2
    MOV EBX,0x40133333                  ; 004d29b7
    PUSH 0x62ac6d                       ; 004d29bc | = "CGabriella"
    MOV ESI,0x408ccccd                  ; 004d29c1
    MOV dword ptr [0x02d7b834],ECX      ; 004d29c6 | DAT_02d7b834
    PUSH 0x2d7b898                      ; 004d29cc | g_CGabriellaClassInfo
    MOV dword ptr [0x02d7b838],EBX      ; 004d29d1 | DAT_02d7b838
    MOV dword ptr [0x02d7b83c],ESI      ; 004d29d7 | DAT_02d7b83c
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004d29dd
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004d29e2
    POP EBP                             ; 004d29e5
    POP EDI                             ; 004d29e6
    POP ESI                             ; 004d29e7
    POP EBX                             ; 004d29e8
    RET                                 ; 004d29e9

