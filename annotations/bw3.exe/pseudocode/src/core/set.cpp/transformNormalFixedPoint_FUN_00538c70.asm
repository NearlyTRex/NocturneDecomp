; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack_esi core_set_cpp_transformNormalFixedPoint_FUN_00538c70(CVector3i *input,CVector3i *output)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   input
;
; Referenced Globals:
;   undefined4 DAT_01c6e2fc
;   undefined4 DAT_01c6e300
;   undefined4 DAT_01c6e304
;   undefined4 DAT_01c6e308
;   undefined4 DAT_01c6e30c
;   undefined4 DAT_01c6e310
;   undefined4 DAT_01c6e314
;   undefined4 DAT_01c6e318
;   undefined4 DAT_01c6e31c
;   undefined4 DAT_01d72644
;   undefined4 DAT_01d72648
;   undefined4 DAT_01d7264c
;   undefined4 DAT_01d72650
;   undefined4 DAT_01d72654
;   undefined4 DAT_01d72658
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538c70
        ;   Label: core_set.cpp_transformNormalFixedPoint_FUN_00538c70
    PUSH EDI                            ; 00538c71
    SUB ESP,0x18                        ; 00538c72
    MOV ECX,dword ptr [ESP + 0x24]      ; 00538c75
    MOV EBX,ESI                         ; 00538c79
    MOV EAX,[0x01c6e2fc]                ; 00538c7b | DAT_01c6e2fc
    MOV EDX,dword ptr [ECX]             ; 00538c80
    IMUL EDX                            ; 00538c82
    SHRD EAX,EDX,0x10                   ; 00538c84
    MOV ESI,EAX                         ; 00538c88
    MOV EDX,dword ptr [ECX + 0x4]       ; 00538c8a
    MOV EAX,[0x01c6e308]                ; 00538c8d | DAT_01c6e308
    IMUL EDX                            ; 00538c92
    SHRD EAX,EDX,0x10                   ; 00538c94
    MOV EDX,dword ptr [ECX + 0x8]       ; 00538c98
    ADD ESI,EAX                         ; 00538c9b
    MOV EAX,[0x01c6e314]                ; 00538c9d | DAT_01c6e314
    IMUL EDX                            ; 00538ca2
    SHRD EAX,EDX,0x10                   ; 00538ca4
    MOV EDX,dword ptr [ECX]             ; 00538ca8
    ADD ESI,EAX                         ; 00538caa
    MOV EAX,[0x01c6e300]                ; 00538cac | DAT_01c6e300
    MOV dword ptr [ESP + 0xc],ESI       ; 00538cb1
    IMUL EDX                            ; 00538cb5
    SHRD EAX,EDX,0x10                   ; 00538cb7
    MOV ESI,EAX                         ; 00538cbb
    MOV EDX,dword ptr [ECX + 0x4]       ; 00538cbd
    MOV EAX,[0x01c6e30c]                ; 00538cc0 | DAT_01c6e30c
    IMUL EDX                            ; 00538cc5
    SHRD EAX,EDX,0x10                   ; 00538cc7
    MOV EDX,dword ptr [ECX + 0x8]       ; 00538ccb
    ADD ESI,EAX                         ; 00538cce
    MOV EAX,[0x01c6e318]                ; 00538cd0 | DAT_01c6e318
    IMUL EDX                            ; 00538cd5
    SHRD EAX,EDX,0x10                   ; 00538cd7
    MOV EDX,dword ptr [ECX]             ; 00538cdb
    ADD ESI,EAX                         ; 00538cdd
    MOV EAX,[0x01c6e304]                ; 00538cdf | DAT_01c6e304
    MOV dword ptr [ESP + 0x10],ESI      ; 00538ce4
    IMUL EDX                            ; 00538ce8
    SHRD EAX,EDX,0x10                   ; 00538cea
    MOV ESI,EAX                         ; 00538cee
    MOV EDX,dword ptr [ECX + 0x4]       ; 00538cf0
    MOV EAX,[0x01c6e310]                ; 00538cf3 | DAT_01c6e310
    IMUL EDX                            ; 00538cf8
    SHRD EAX,EDX,0x10                   ; 00538cfa
    MOV EDX,dword ptr [ECX + 0x8]       ; 00538cfe
    ADD ESI,EAX                         ; 00538d01
    MOV EAX,[0x01c6e31c]                ; 00538d03 | DAT_01c6e31c
    IMUL EDX                            ; 00538d08
    SHRD EAX,EDX,0x10                   ; 00538d0a
    MOV EDX,dword ptr [ESP + 0xc]       ; 00538d0e
    ADD ESI,EAX                         ; 00538d12
    MOV EAX,[0x01d72644]                ; 00538d14 | DAT_01d72644
    IMUL EDX                            ; 00538d19
    SHRD EAX,EDX,0x10                   ; 00538d1b
    MOV EDX,dword ptr [ESP + 0x10]      ; 00538d1f
    MOV ECX,EAX                         ; 00538d23
    MOV EAX,[0x01d72650]                ; 00538d25 | DAT_01d72650
    IMUL EDX                            ; 00538d2a
    SHRD EAX,EDX,0x10                   ; 00538d2c
    MOV EDX,ESI                         ; 00538d30
    ADD ECX,EAX                         ; 00538d32
    MOV EAX,[0x01d7265c]                ; 00538d34 | DAT_01d7265c
    IMUL EDX                            ; 00538d39
    SHRD EAX,EDX,0x10                   ; 00538d3b
    ADD ECX,EAX                         ; 00538d3f
    MOV dword ptr [ESP + 0x14],ESI      ; 00538d41
    MOV dword ptr [ESP],ECX             ; 00538d45
    MOV EDX,dword ptr [ESP + 0xc]       ; 00538d48
    MOV EAX,[0x01d72648]                ; 00538d4c | DAT_01d72648
    IMUL EDX                            ; 00538d51
    SHRD EAX,EDX,0x10                   ; 00538d53
    MOV EDX,dword ptr [ESP + 0x10]      ; 00538d57
    MOV ECX,EAX                         ; 00538d5b
    MOV EAX,[0x01d72654]                ; 00538d5d | DAT_01d72654
    IMUL EDX                            ; 00538d62
    SHRD EAX,EDX,0x10                   ; 00538d64
    MOV EDX,ESI                         ; 00538d68
    ADD ECX,EAX                         ; 00538d6a
    MOV EAX,[0x01d72660]                ; 00538d6c | DAT_01d72660
    IMUL EDX                            ; 00538d71
    SHRD EAX,EDX,0x10                   ; 00538d73
    MOV EDX,dword ptr [ESP + 0xc]       ; 00538d77
    ADD ECX,EAX                         ; 00538d7b
    MOV EAX,[0x01d7264c]                ; 00538d7d | DAT_01d7264c
    MOV dword ptr [ESP + 0x4],ECX       ; 00538d82
    IMUL EDX                            ; 00538d86
    SHRD EAX,EDX,0x10                   ; 00538d88
    MOV EDX,dword ptr [ESP + 0x10]      ; 00538d8c
    MOV ECX,EAX                         ; 00538d90
    MOV EAX,[0x01d72658]                ; 00538d92 | DAT_01d72658
    IMUL EDX                            ; 00538d97
    SHRD EAX,EDX,0x10                   ; 00538d99
    MOV EDX,ESI                         ; 00538d9d
    ADD ECX,EAX                         ; 00538d9f
    MOV EAX,[0x01d72664]                ; 00538da1 | DAT_01d72664
    MOV EDI,EBX                         ; 00538da6
    IMUL EDX                            ; 00538da8
    SHRD EAX,EDX,0x10                   ; 00538daa
    ADD ECX,EAX                         ; 00538dae
    MOV ESI,ESP                         ; 00538db0
    MOV dword ptr [ESP + 0x8],ECX       ; 00538db2
    MOVSD ES:EDI,ESI                    ; 00538db6
    MOVSD ES:EDI,ESI                    ; 00538db7
    MOVSD ES:EDI,ESI                    ; 00538db8
    MOV EAX,EBX                         ; 00538db9
    ADD ESP,0x18                        ; 00538dbb
    POP EDI                             ; 00538dbe
    POP EBX                             ; 00538dbf
    RET                                 ; 00538dc0

