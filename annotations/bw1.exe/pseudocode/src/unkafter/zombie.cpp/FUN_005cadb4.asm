; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_005cadb4(void)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005ceab0 at 005cead2
;
; Referenced Globals:
;   void* PTR_TlsSetValue_005d066c = 001d1274
;   undefined4 DAT_006265f8
;   void* PTR_crt_unknown.c_FUN_005c50cc_006265fc = 005c50cc
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626600 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626604 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d8_00626608 = 005c50d8
;   void* PTR_crt_unknown.c_FUN_005c50e8_0062660c = 005c50e8
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626610 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626614 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626618 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_0062661c = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626620 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626624 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626628 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_0062662c = 005c50d4
;   ... and 9 more
;
; Called Functions:
;   TlsSetValue
;   unkafter_zombie.cpp_FUN_005ca924
;   unkafter_zombie.cpp_FUN_005cce60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cadb4
        ;   Label: unkafter_zombie.cpp_FUN_005cadb4
    PUSH ESI                            ; 005cadb5
    PUSH EDI                            ; 005cadb6
    PUSH EBP                            ; 005cadb7
    MOV EDX,0x5cab0c                    ; 005cadb8
    MOV EBX,0x5cab28                    ; 005cadbd
    MOV ECX,0x5cab44                    ; 005cadc2
    MOV ESI,0x5cab54                    ; 005cadc7
    MOV EDI,0x5caaec                    ; 005cadcc
    MOV EBP,0x5caafc                    ; 005cadd1
    MOV EAX,0x5cabbc                    ; 005cadd6
    MOV dword ptr [0x00626600],EDX      ; 005caddb | PTR_crt_unknown.c_FUN_005c50d4_00626600
    MOV dword ptr [0x00626604],EBX      ; 005cade1 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    MOV dword ptr [0x00626608],ECX      ; 005cade7 | PTR_crt_unknown.c_FUN_005c50d8_00626608
    MOV dword ptr [0x0062660c],ESI      ; 005caded | PTR_crt_unknown.c_FUN_005c50e8_0062660c
    MOV dword ptr [0x00626610],EDI      ; 005cadf3 | PTR_crt_unknown.c_FUN_005c50d4_00626610
    MOV dword ptr [0x00626614],EBP      ; 005cadf9 | PTR_crt_unknown.c_FUN_005c50d4_00626614
    MOV [0x00626628],EAX                ; 005cadff | PTR_crt_unknown.c_FUN_005c50d4_00626628
    MOV EDX,0x5cabcc                    ; 005cae04
    MOV EBX,0x5caa60                    ; 005cae09
    MOV ECX,0x5caac4                    ; 005cae0e
    MOV ESI,0x5caa4c                    ; 005cae13
    MOV EDI,0x5cab7c                    ; 005cae18
    MOV EBP,0x5cab9c                    ; 005cae1d
    MOV EAX,0x5cab8c                    ; 005cae22
    MOV dword ptr [0x0062662c],EDX      ; 005cae27 | PTR_crt_unknown.c_FUN_005c50d4_0062662c
    MOV dword ptr [0x00626a40],EBX      ; 005cae2d | PTR_unkafter_zombie.cpp_FUN_005ca920_00626a40
    MOV dword ptr [0x00626a44],ECX      ; 005cae33 | PTR_unkafter_zombie.cpp_FUN_005ca920_00626a44
    MOV dword ptr [0x00626a48],ESI      ; 005cae39 | PTR_unkafter_zombie.cpp_FUN_005ca920_00626a48
    MOV dword ptr [0x00626618],EDI      ; 005cae3f | PTR_crt_unknown.c_FUN_005c50d4_00626618
    MOV dword ptr [0x0062661c],EBP      ; 005cae45 | PTR_crt_unknown.c_FUN_005c50d4_0062661c
    MOV [0x00626620],EAX                ; 005cae4b | PTR_crt_unknown.c_FUN_005c50d4_00626620
    MOV EDX,0x5cabac                    ; 005cae50
    MOV EBX,0x1                         ; 005cae55
    MOV ESI,0x5cabec                    ; 005cae5a
    MOV EDI,0x5cad88                    ; 005cae5f
    MOV dword ptr [0x00626624],EDX      ; 005cae64 | PTR_crt_unknown.c_FUN_005c50d4_00626624
    CALL unkafter_zombie.cpp_FUN_005ca924 ; 005cae6a
        ;   XREF to: 005ca924 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005ca924()
    MOV ECX,0x5cabdc                    ; 005cae6f
    MOV EBP,dword ptr [0x02c9f06c]      ; 005cae74 | DAT_02c9f06c
    MOV [0x02c9ff30],EAX                ; 005cae7a | DAT_02c9ff30
    MOV dword ptr [0x02c9ff34],EBX      ; 005cae7f | DAT_02c9ff34
    PUSH EBP                            ; 005cae85
    MOV EDX,dword ptr [EBP + 0xda]      ; 005cae86
    MOV dword ptr [0x00626634],ESI      ; 005cae8c | PTR_crt_unknown.c_FUN_005c50d4_00626634
    PUSH EDX                            ; 005cae92
    MOV dword ptr [0x00626638],EDI      ; 005cae93 | PTR_crt_unknown.c_FUN_005c50d4_00626638
    MOV dword ptr [0x00626630],ECX      ; 005cae99 | PTR_crt_unknown.c_FUN_005c50d4_00626630
    CALL unkafter_zombie.cpp_FUN_005cce60 ; 005cae9f
        ;   XREF to: 005cce60 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cce60()
    ADD ESP,0x8                         ; 005caea4
    MOV EBX,dword ptr [0x02c9f06c]      ; 005caea7 | DAT_02c9f06c
    PUSH EBX                            ; 005caead
    MOV ECX,dword ptr [0x006265f8]      ; 005caeae | DAT_006265f8
    PUSH ECX                            ; 005caeb4
    MOV ESI,0x5cabfc                    ; 005caeb5
    CALL dword ptr CS:[0x5d066c]        ; 005caeba | PTR_TlsSetValue_005d066c
    MOV dword ptr [0x006265fc],ESI      ; 005caec1 | PTR_crt_unknown.c_FUN_005c50cc_006265fc
    POP EBP                             ; 005caec7
    POP EDI                             ; 005caec8
    POP ESI                             ; 005caec9
    POP EBX                             ; 005caeca
    RET                                 ; 005caecb

