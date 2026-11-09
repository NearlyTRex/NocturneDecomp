; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_transformNormalFixedPoint_FUN_005532e0(int *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01c51d5c
;   undefined4 DAT_01c51d60
;   undefined4 DAT_01c51d64
;   undefined4 DAT_01c51d68
;   undefined4 DAT_01c51d6c
;   undefined4 DAT_01c51d70
;   undefined4 DAT_01c51d74
;   undefined4 DAT_01c51d78
;   undefined4 DAT_01c51d7c
;   undefined4 DAT_01d1dd18
;   undefined4 DAT_01d1dd1c
;   undefined4 DAT_01d1dd20
;   undefined4 DAT_01d1dd24
;   undefined4 DAT_01d1dd28
;   undefined4 DAT_01d1dd2c
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005532e0
        ;   Label: core_set.cpp_transformNormalFixedPoint_FUN_005532e0
    PUSH EDI                            ; 005532e1
    SUB ESP,0x18                        ; 005532e2
    MOV ECX,dword ptr [ESP + 0x24]      ; 005532e5
    MOV EBX,ESI                         ; 005532e9
    MOV EAX,[0x01c51d5c]                ; 005532eb | DAT_01c51d5c
    MOV EDX,dword ptr [ECX]             ; 005532f0
    IMUL EDX                            ; 005532f2
    SHRD EAX,EDX,0x10                   ; 005532f4
    MOV ESI,EAX                         ; 005532f8
    MOV EDX,dword ptr [ECX + 0x4]       ; 005532fa
    MOV EAX,[0x01c51d68]                ; 005532fd | DAT_01c51d68
    IMUL EDX                            ; 00553302
    SHRD EAX,EDX,0x10                   ; 00553304
    MOV EDX,dword ptr [ECX + 0x8]       ; 00553308
    ADD ESI,EAX                         ; 0055330b
    MOV EAX,[0x01c51d74]                ; 0055330d | DAT_01c51d74
    IMUL EDX                            ; 00553312
    SHRD EAX,EDX,0x10                   ; 00553314
    MOV EDX,dword ptr [ECX]             ; 00553318
    ADD ESI,EAX                         ; 0055331a
    MOV EAX,[0x01c51d60]                ; 0055331c | DAT_01c51d60
    MOV dword ptr [ESP + 0xc],ESI       ; 00553321
    IMUL EDX                            ; 00553325
    SHRD EAX,EDX,0x10                   ; 00553327
    MOV ESI,EAX                         ; 0055332b
    MOV EDX,dword ptr [ECX + 0x4]       ; 0055332d
    MOV EAX,[0x01c51d6c]                ; 00553330 | DAT_01c51d6c
    IMUL EDX                            ; 00553335
    SHRD EAX,EDX,0x10                   ; 00553337
    MOV EDX,dword ptr [ECX + 0x8]       ; 0055333b
    ADD ESI,EAX                         ; 0055333e
    MOV EAX,[0x01c51d78]                ; 00553340 | DAT_01c51d78
    IMUL EDX                            ; 00553345
    SHRD EAX,EDX,0x10                   ; 00553347
    MOV EDX,dword ptr [ECX]             ; 0055334b
    ADD ESI,EAX                         ; 0055334d
    MOV EAX,[0x01c51d64]                ; 0055334f | DAT_01c51d64
    MOV dword ptr [ESP + 0x10],ESI      ; 00553354
    IMUL EDX                            ; 00553358
    SHRD EAX,EDX,0x10                   ; 0055335a
    MOV ESI,EAX                         ; 0055335e
    MOV EDX,dword ptr [ECX + 0x4]       ; 00553360
    MOV EAX,[0x01c51d70]                ; 00553363 | DAT_01c51d70
    IMUL EDX                            ; 00553368
    SHRD EAX,EDX,0x10                   ; 0055336a
    MOV EDX,dword ptr [ECX + 0x8]       ; 0055336e
    ADD ESI,EAX                         ; 00553371
    MOV EAX,[0x01c51d7c]                ; 00553373 | DAT_01c51d7c
    IMUL EDX                            ; 00553378
    SHRD EAX,EDX,0x10                   ; 0055337a
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055337e
    ADD ESI,EAX                         ; 00553382
    MOV EAX,[0x01d1dd18]                ; 00553384 | DAT_01d1dd18
    IMUL EDX                            ; 00553389
    SHRD EAX,EDX,0x10                   ; 0055338b
    MOV EDX,dword ptr [ESP + 0x10]      ; 0055338f
    MOV ECX,EAX                         ; 00553393
    MOV EAX,[0x01d1dd24]                ; 00553395 | DAT_01d1dd24
    IMUL EDX                            ; 0055339a
    SHRD EAX,EDX,0x10                   ; 0055339c
    MOV EDX,ESI                         ; 005533a0
    ADD ECX,EAX                         ; 005533a2
    MOV EAX,[0x01d1dd30]                ; 005533a4 | DAT_01d1dd30
    IMUL EDX                            ; 005533a9
    SHRD EAX,EDX,0x10                   ; 005533ab
    ADD ECX,EAX                         ; 005533af
    MOV dword ptr [ESP + 0x14],ESI      ; 005533b1
    MOV dword ptr [ESP],ECX             ; 005533b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005533b8
    MOV EAX,[0x01d1dd1c]                ; 005533bc | DAT_01d1dd1c
    IMUL EDX                            ; 005533c1
    SHRD EAX,EDX,0x10                   ; 005533c3
    MOV EDX,dword ptr [ESP + 0x10]      ; 005533c7
    MOV ECX,EAX                         ; 005533cb
    MOV EAX,[0x01d1dd28]                ; 005533cd | DAT_01d1dd28
    IMUL EDX                            ; 005533d2
    SHRD EAX,EDX,0x10                   ; 005533d4
    MOV EDX,ESI                         ; 005533d8
    ADD ECX,EAX                         ; 005533da
    MOV EAX,[0x01d1dd34]                ; 005533dc | DAT_01d1dd34
    IMUL EDX                            ; 005533e1
    SHRD EAX,EDX,0x10                   ; 005533e3
    MOV EDX,dword ptr [ESP + 0xc]       ; 005533e7
    ADD ECX,EAX                         ; 005533eb
    MOV EAX,[0x01d1dd20]                ; 005533ed | DAT_01d1dd20
    MOV dword ptr [ESP + 0x4],ECX       ; 005533f2
    IMUL EDX                            ; 005533f6
    SHRD EAX,EDX,0x10                   ; 005533f8
    MOV EDX,dword ptr [ESP + 0x10]      ; 005533fc
    MOV ECX,EAX                         ; 00553400
    MOV EAX,[0x01d1dd2c]                ; 00553402 | DAT_01d1dd2c
    IMUL EDX                            ; 00553407
    SHRD EAX,EDX,0x10                   ; 00553409
    MOV EDX,ESI                         ; 0055340d
    ADD ECX,EAX                         ; 0055340f
    MOV EAX,[0x01d1dd38]                ; 00553411 | DAT_01d1dd38
    MOV EDI,EBX                         ; 00553416
    IMUL EDX                            ; 00553418
    SHRD EAX,EDX,0x10                   ; 0055341a
    ADD ECX,EAX                         ; 0055341e
    MOV ESI,ESP                         ; 00553420
    MOV dword ptr [ESP + 0x8],ECX       ; 00553422
    MOVSD ES:EDI,ESI                    ; 00553426
    MOVSD ES:EDI,ESI                    ; 00553427
    MOVSD ES:EDI,ESI                    ; 00553428
    MOV EAX,EBX                         ; 00553429
    ADD ESP,0x18                        ; 0055342b
    POP EDI                             ; 0055342e
    POP EBX                             ; 0055342f
    RET                                 ; 00553430

