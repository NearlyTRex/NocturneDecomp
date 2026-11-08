; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00531f60(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_00532190 at 005323f0
;
; Referenced Globals:
;   undefined4 DAT_01c38b78
;   undefined4 DAT_01c38b7c
;   undefined4 DAT_01c38b80
;   undefined4 DAT_01d04fb8
;   undefined4 DAT_01d04fbc
;   undefined4 DAT_01d04fc0
;   undefined4 DAT_01d04fc4
;   undefined4 DAT_01d04fc8
;   undefined4 DAT_01d04fcc
;   undefined4 DAT_01d04fd0
;   undefined4 DAT_01d04fd4
;   undefined4 DAT_01d04fd8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531f60
        ;   Label: FUN_00531f60
    PUSH EDI                            ; 00531f61
    SUB ESP,0xc                         ; 00531f62
    MOV ECX,dword ptr [ESP + 0x18]      ; 00531f65
    MOV EBX,ESI                         ; 00531f69
    MOV EAX,[0x01d04fb8]                ; 00531f6b | DAT_01d04fb8
    MOV EDX,dword ptr [ECX]             ; 00531f70
    IMUL EDX                            ; 00531f72
    SHRD EAX,EDX,0x10                   ; 00531f74
    MOV ESI,EAX                         ; 00531f78
    MOV EDX,dword ptr [ECX + 0x4]       ; 00531f7a
    MOV EAX,[0x01d04fc4]                ; 00531f7d | DAT_01d04fc4
    IMUL EDX                            ; 00531f82
    SHRD EAX,EDX,0x10                   ; 00531f84
    MOV EDX,dword ptr [ECX + 0x8]       ; 00531f88
    ADD ESI,EAX                         ; 00531f8b
    MOV EAX,[0x01d04fd0]                ; 00531f8d | DAT_01d04fd0
    IMUL EDX                            ; 00531f92
    SHRD EAX,EDX,0x10                   ; 00531f94
    MOV EDX,dword ptr [0x01c38b78]      ; 00531f98 | DAT_01c38b78
    ADD EAX,ESI                         ; 00531f9e
    ADD EDX,EAX                         ; 00531fa0
    MOV EAX,[0x01d04fbc]                ; 00531fa2 | DAT_01d04fbc
    MOV dword ptr [ESP],EDX             ; 00531fa7
    MOV EDX,dword ptr [ECX]             ; 00531faa
    IMUL EDX                            ; 00531fac
    SHRD EAX,EDX,0x10                   ; 00531fae
    MOV ESI,EAX                         ; 00531fb2
    MOV EDX,dword ptr [ECX + 0x4]       ; 00531fb4
    MOV EAX,[0x01d04fc8]                ; 00531fb7 | DAT_01d04fc8
    IMUL EDX                            ; 00531fbc
    SHRD EAX,EDX,0x10                   ; 00531fbe
    MOV EDX,dword ptr [ECX + 0x8]       ; 00531fc2
    ADD ESI,EAX                         ; 00531fc5
    MOV EAX,[0x01d04fd4]                ; 00531fc7 | DAT_01d04fd4
    IMUL EDX                            ; 00531fcc
    SHRD EAX,EDX,0x10                   ; 00531fce
    MOV EDX,dword ptr [0x01c38b7c]      ; 00531fd2 | DAT_01c38b7c
    ADD EAX,ESI                         ; 00531fd8
    ADD EDX,EAX                         ; 00531fda
    MOV EAX,[0x01d04fc0]                ; 00531fdc | DAT_01d04fc0
    MOV dword ptr [ESP + 0x4],EDX       ; 00531fe1
    MOV EDX,dword ptr [ECX]             ; 00531fe5
    IMUL EDX                            ; 00531fe7
    SHRD EAX,EDX,0x10                   ; 00531fe9
    MOV ESI,EAX                         ; 00531fed
    MOV EDX,dword ptr [ECX + 0x4]       ; 00531fef
    MOV EAX,[0x01d04fcc]                ; 00531ff2 | DAT_01d04fcc
    IMUL EDX                            ; 00531ff7
    SHRD EAX,EDX,0x10                   ; 00531ff9
    MOV EDX,dword ptr [ECX + 0x8]       ; 00531ffd
    ADD ESI,EAX                         ; 00532000
    MOV EAX,[0x01d04fd8]                ; 00532002 | DAT_01d04fd8
    IMUL EDX                            ; 00532007
    SHRD EAX,EDX,0x10                   ; 00532009
    MOV EDX,dword ptr [0x01c38b80]      ; 0053200d | DAT_01c38b80
    ADD EAX,ESI                         ; 00532013
    MOV EDI,EBX                         ; 00532015
    ADD EDX,EAX                         ; 00532017
    MOV ESI,ESP                         ; 00532019
    MOV dword ptr [ESP + 0x8],EDX       ; 0053201b
    MOVSD ES:EDI,ESI                    ; 0053201f
    MOVSD ES:EDI,ESI                    ; 00532020
    MOVSD ES:EDI,ESI                    ; 00532021
    MOV EAX,EBX                         ; 00532022
    ADD ESP,0xc                         ; 00532024
    POP EDI                             ; 00532027
    POP EBX                             ; 00532028
    RET                                 ; 00532029

