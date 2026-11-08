; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00553210(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_00553440 at 005536a0
;
; Referenced Globals:
;   undefined4 DAT_01c51d38
;   undefined4 DAT_01c51d3c
;   undefined4 DAT_01c51d40
;   undefined4 DAT_01d1dd18
;   undefined4 DAT_01d1dd1c
;   undefined4 DAT_01d1dd20
;   undefined4 DAT_01d1dd24
;   undefined4 DAT_01d1dd28
;   undefined4 DAT_01d1dd2c
;   undefined4 DAT_01d1dd30
;   undefined4 DAT_01d1dd34
;   undefined4 DAT_01d1dd38
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553210
        ;   Label: FUN_00553210
    PUSH EDI                            ; 00553211
    SUB ESP,0xc                         ; 00553212
    MOV ECX,dword ptr [ESP + 0x18]      ; 00553215
    MOV EBX,ESI                         ; 00553219
    MOV EAX,[0x01d1dd18]                ; 0055321b | DAT_01d1dd18
    MOV EDX,dword ptr [ECX]             ; 00553220
    IMUL EDX                            ; 00553222
    SHRD EAX,EDX,0x10                   ; 00553224
    MOV ESI,EAX                         ; 00553228
    MOV EDX,dword ptr [ECX + 0x4]       ; 0055322a
    MOV EAX,[0x01d1dd24]                ; 0055322d | DAT_01d1dd24
    IMUL EDX                            ; 00553232
    SHRD EAX,EDX,0x10                   ; 00553234
    MOV EDX,dword ptr [ECX + 0x8]       ; 00553238
    ADD ESI,EAX                         ; 0055323b
    MOV EAX,[0x01d1dd30]                ; 0055323d | DAT_01d1dd30
    IMUL EDX                            ; 00553242
    SHRD EAX,EDX,0x10                   ; 00553244
    MOV EDX,dword ptr [0x01c51d38]      ; 00553248 | DAT_01c51d38
    ADD EAX,ESI                         ; 0055324e
    ADD EDX,EAX                         ; 00553250
    MOV EAX,[0x01d1dd1c]                ; 00553252 | DAT_01d1dd1c
    MOV dword ptr [ESP],EDX             ; 00553257
    MOV EDX,dword ptr [ECX]             ; 0055325a
    IMUL EDX                            ; 0055325c
    SHRD EAX,EDX,0x10                   ; 0055325e
    MOV ESI,EAX                         ; 00553262
    MOV EDX,dword ptr [ECX + 0x4]       ; 00553264
    MOV EAX,[0x01d1dd28]                ; 00553267 | DAT_01d1dd28
    IMUL EDX                            ; 0055326c
    SHRD EAX,EDX,0x10                   ; 0055326e
    MOV EDX,dword ptr [ECX + 0x8]       ; 00553272
    ADD ESI,EAX                         ; 00553275
    MOV EAX,[0x01d1dd34]                ; 00553277 | DAT_01d1dd34
    IMUL EDX                            ; 0055327c
    SHRD EAX,EDX,0x10                   ; 0055327e
    MOV EDX,dword ptr [0x01c51d3c]      ; 00553282 | DAT_01c51d3c
    ADD EAX,ESI                         ; 00553288
    ADD EDX,EAX                         ; 0055328a
    MOV EAX,[0x01d1dd20]                ; 0055328c | DAT_01d1dd20
    MOV dword ptr [ESP + 0x4],EDX       ; 00553291
    MOV EDX,dword ptr [ECX]             ; 00553295
    IMUL EDX                            ; 00553297
    SHRD EAX,EDX,0x10                   ; 00553299
    MOV ESI,EAX                         ; 0055329d
    MOV EDX,dword ptr [ECX + 0x4]       ; 0055329f
    MOV EAX,[0x01d1dd2c]                ; 005532a2 | DAT_01d1dd2c
    IMUL EDX                            ; 005532a7
    SHRD EAX,EDX,0x10                   ; 005532a9
    MOV EDX,dword ptr [ECX + 0x8]       ; 005532ad
    ADD ESI,EAX                         ; 005532b0
    MOV EAX,[0x01d1dd38]                ; 005532b2 | DAT_01d1dd38
    IMUL EDX                            ; 005532b7
    SHRD EAX,EDX,0x10                   ; 005532b9
    MOV EDX,dword ptr [0x01c51d40]      ; 005532bd | DAT_01c51d40
    ADD EAX,ESI                         ; 005532c3
    MOV EDI,EBX                         ; 005532c5
    ADD EDX,EAX                         ; 005532c7
    MOV ESI,ESP                         ; 005532c9
    MOV dword ptr [ESP + 0x8],EDX       ; 005532cb
    MOVSD ES:EDI,ESI                    ; 005532cf
    MOVSD ES:EDI,ESI                    ; 005532d0
    MOVSD ES:EDI,ESI                    ; 005532d1
    MOV EAX,EBX                         ; 005532d2
    ADD ESP,0xc                         ; 005532d4
    POP EDI                             ; 005532d7
    POP EBX                             ; 005532d8
    RET                                 ; 005532d9

