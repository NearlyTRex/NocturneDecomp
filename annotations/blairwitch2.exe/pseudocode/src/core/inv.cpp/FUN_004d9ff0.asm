; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_FUN_004d9ff0(float param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_inv.cpp_FUN_004da130 at 004da329
;   core_inv.cpp_FUN_004dd9b0 at 004de5aa
;
; Referenced Globals:
;   undefined4 DAT_005db3ea
;   undefined4 DAT_01c35e38
;   undefined4 DAT_01c35e3c
;   undefined4 DAT_01c35e40
;   undefined4 DAT_01c35e44
;   undefined4 DAT_01c38b6c
;   undefined4 DAT_01c38b70
;   undefined4 DAT_01c38b74
;   undefined4 DAT_01d04fb8
;   undefined4 DAT_01d04fbc
;   undefined4 DAT_01d04fc0
;   undefined4 DAT_01d04fc4
;   undefined4 DAT_01d04fc8
;   undefined4 DAT_01d04fcc
;   undefined4 DAT_01d04fd0
;   ... and 2 more
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004d9ff0
        ;   Label: core_inv.cpp_FUN_004d9ff0
    PUSH EBP                            ; 004d9ff1
    SUB ESP,0x14                        ; 004d9ff2
    MOV EBP,ESI                         ; 004d9ff5
    PUSH EBX                            ; 004d9ff7
    FLD double ptr [0x005db3ea]         ; 004d9ff8 | DAT_005db3ea
    FLD float ptr [ESP + 0x24]          ; 004d9ffe
    FMUL ST1                            ; 004da002
    FLD float ptr [ESP + 0x28]          ; 004da004
    FMULP ST2                           ; 004da008
    MOV EBX,dword ptr [0x01c35e38]      ; 004da00a | DAT_01c35e38
    MOV EDX,dword ptr [0x01c35e40]      ; 004da010 | DAT_01c35e40
    CALL crt_math.c_round_FUN_005b7ff0  ; 004da016
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x10]        ; 004da01b
    MOV EAX,dword ptr [ESP + 0x10]      ; 004da01f
    CALL crt_math.c_round_FUN_005b7ff0  ; 004da023
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    SUB EAX,EDX                         ; 004da028
    MOV EDX,0x10000                     ; 004da02a
    FISTP dword ptr [ESP + 0x14]        ; 004da02f
    IMUL EDX                            ; 004da033
    IDIV EBX                            ; 004da035
    MOV EDX,0x10000                     ; 004da037
    MOV ECX,dword ptr [0x01c35e44]      ; 004da03c | DAT_01c35e44
    MOV ESI,EAX                         ; 004da042
    MOV EAX,dword ptr [ESP + 0x14]      ; 004da044
    MOV EBX,dword ptr [0x01c35e3c]      ; 004da048 | DAT_01c35e3c
    SUB EAX,ECX                         ; 004da04e
    IMUL EDX                            ; 004da050
    IDIV EBX                            ; 004da052
    MOV ECX,EAX                         ; 004da054
    MOV EDX,ESI                         ; 004da056
    MOV EAX,[0x01d04fb8]                ; 004da058 | DAT_01d04fb8
    IMUL EDX                            ; 004da05d
    SHRD EAX,EDX,0x10                   ; 004da05f
    MOV EBX,EAX                         ; 004da063
    MOV EDX,ECX                         ; 004da065
    MOV EAX,[0x01d04fc4]                ; 004da067 | DAT_01d04fc4
    IMUL EDX                            ; 004da06c
    SHRD EAX,EDX,0x10                   ; 004da06e
    MOV EDX,0x10000                     ; 004da072
    ADD EBX,EAX                         ; 004da077
    MOV EAX,[0x01d04fd0]                ; 004da079 | DAT_01d04fd0
    IMUL EDX                            ; 004da07e
    SHRD EAX,EDX,0x10                   ; 004da080
    ADD EAX,EBX                         ; 004da084
    MOV EBX,dword ptr [0x01c38b6c]      ; 004da086 | DAT_01c38b6c
    MOV EDX,ESI                         ; 004da08c
    ADD EBX,EAX                         ; 004da08e
    MOV EAX,[0x01d04fbc]                ; 004da090 | DAT_01d04fbc
    MOV dword ptr [ESP + 0x4],EBX       ; 004da095
    IMUL EDX                            ; 004da099
    SHRD EAX,EDX,0x10                   ; 004da09b
    MOV EBX,EAX                         ; 004da09f
    MOV EDX,ECX                         ; 004da0a1
    MOV EAX,[0x01d04fc8]                ; 004da0a3 | DAT_01d04fc8
    IMUL EDX                            ; 004da0a8
    SHRD EAX,EDX,0x10                   ; 004da0aa
    MOV EDX,0x10000                     ; 004da0ae
    ADD EBX,EAX                         ; 004da0b3
    MOV EAX,[0x01d04fd4]                ; 004da0b5 | DAT_01d04fd4
    IMUL EDX                            ; 004da0ba
    SHRD EAX,EDX,0x10                   ; 004da0bc
    ADD EAX,EBX                         ; 004da0c0
    MOV EBX,dword ptr [0x01c38b70]      ; 004da0c2 | DAT_01c38b70
    MOV EDX,ESI                         ; 004da0c8
    ADD EBX,EAX                         ; 004da0ca
    MOV EAX,[0x01d04fc0]                ; 004da0cc | DAT_01d04fc0
    MOV dword ptr [ESP + 0x8],EBX       ; 004da0d1
    IMUL EDX                            ; 004da0d5
    SHRD EAX,EDX,0x10                   ; 004da0d7
    MOV EBX,EAX                         ; 004da0db
    MOV EDX,ECX                         ; 004da0dd
    MOV EAX,[0x01d04fcc]                ; 004da0df | DAT_01d04fcc
    IMUL EDX                            ; 004da0e4
    SHRD EAX,EDX,0x10                   ; 004da0e6
    MOV EDX,0x10000                     ; 004da0ea
    ADD EBX,EAX                         ; 004da0ef
    MOV EAX,[0x01d04fd8]                ; 004da0f1 | DAT_01d04fd8
    IMUL EDX                            ; 004da0f6
    SHRD EAX,EDX,0x10                   ; 004da0f8
    MOV ECX,dword ptr [0x01c38b74]      ; 004da0fc | DAT_01c38b74
    ADD EAX,EBX                         ; 004da102
    ADD ECX,EAX                         ; 004da104
    MOV dword ptr [ESP + 0xc],ECX       ; 004da106
    POP EBX                             ; 004da10a
    MOV ESI,ESP                         ; 004da10b
    MOV EDI,EBP                         ; 004da10d
    MOVSD ES:EDI,ESI                    ; 004da10f
    MOVSD ES:EDI,ESI                    ; 004da110
    MOVSD ES:EDI,ESI                    ; 004da111
    MOV EAX,EBP                         ; 004da112
    ADD ESP,0x14                        ; 004da114
    POP EBP                             ; 004da117
    POP EDI                             ; 004da118
    LEA EAX,[EAX]                       ; 004da119
    NOP                                 ; 004da11f
    RET                                 ; 004da120

