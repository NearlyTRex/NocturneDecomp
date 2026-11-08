; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00449eb0(undefined4 param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[4]:
;   FUN_0044b070 at 0044b12b
;   FUN_004b6f30 at 004b7146
;   FUN_004c07b0 at 004c0f83
;   FUN_0055e8b0 at 0055ec5a
;
; Referenced Globals:
;   undefined4 DAT_01c60dac
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449eb0
        ;   Label: FUN_00449eb0
    PUSH EDI                            ; 00449eb1
    SUB ESP,0xc                         ; 00449eb2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00449eb5
    MOV EDX,dword ptr [ESP + 0x20]      ; 00449eb9
    MOV ECX,ESI                         ; 00449ebd
    MOV EBX,EAX                         ; 00449ebf
    SHL EBX,0x10                        ; 00449ec1
    MOV dword ptr [ESP],EBX             ; 00449ec4
    MOV EBX,EDX                         ; 00449ec7
    MOV EDX,dword ptr [EDX*0x4 + 0x1c60dac] ; 00449ec9 | DAT_01c60dac
    SHL EBX,0x10                        ; 00449ed0
    MOV EAX,dword ptr [EDX + EAX*0x4]   ; 00449ed3
    MOV dword ptr [ESP + 0x4],EBX       ; 00449ed6
    MOV dword ptr [ESP + 0x8],EAX       ; 00449eda
    TEST EAX,EAX                        ; 00449ede
    JNZ 0x00449ef9                      ; 00449ee0
        ;   XREF to: 00449ef9 (CONDITIONAL_JUMP)  ; LAB_00449ef9
    MOV dword ptr [ESP + 0x8],0x7fffffff ; 00449ee2
    MOV ESI,ESP                         ; 00449eea
    MOV EDI,ECX                         ; 00449eec
    MOVSD ES:EDI,ESI                    ; 00449eee
    MOVSD ES:EDI,ESI                    ; 00449eef
    MOVSD ES:EDI,ESI                    ; 00449ef0
    MOV EAX,ECX                         ; 00449ef1
    ADD ESP,0xc                         ; 00449ef3
    POP EDI                             ; 00449ef6
    POP EBX                             ; 00449ef7
    RET                                 ; 00449ef8
    MOV EAX,0x7fffffff                  ; 00449ef9
        ;   Label: LAB_00449ef9
    MOV EDX,EAX                         ; 00449efe
    MOV EBX,dword ptr [ESP + 0x8]       ; 00449f00
    SAR EDX,0x1f                        ; 00449f04
    IDIV EBX                            ; 00449f07
    MOV dword ptr [ESP + 0x8],EAX       ; 00449f09
    MOV ESI,ESP                         ; 00449f0d
    MOV EDI,ECX                         ; 00449f0f
    MOVSD ES:EDI,ESI                    ; 00449f11
    MOVSD ES:EDI,ESI                    ; 00449f12
    MOVSD ES:EDI,ESI                    ; 00449f13
    MOV EAX,ECX                         ; 00449f14
    ADD ESP,0xc                         ; 00449f16
    POP EDI                             ; 00449f19
    POP EBX                             ; 00449f1a
    RET                                 ; 00449f1b

