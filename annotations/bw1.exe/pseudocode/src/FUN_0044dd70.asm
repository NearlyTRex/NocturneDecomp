; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044dd70(undefined4 param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[4]:
;   FUN_0044ef30 at 0044efeb
;   FUN_004ce580 at 004ce796
;   FUN_004d9260 at 004d997a
;   FUN_0057b780 at 0057bb2a
;
; Referenced Globals:
;   undefined4 DAT_01c4480c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044dd70
        ;   Label: FUN_0044dd70
    PUSH EDI                            ; 0044dd71
    SUB ESP,0xc                         ; 0044dd72
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044dd75
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044dd79
    MOV ECX,ESI                         ; 0044dd7d
    MOV EBX,EAX                         ; 0044dd7f
    SHL EBX,0x10                        ; 0044dd81
    MOV dword ptr [ESP],EBX             ; 0044dd84
    MOV EBX,EDX                         ; 0044dd87
    MOV EDX,dword ptr [EDX*0x4 + 0x1c4480c] ; 0044dd89 | DAT_01c4480c
    SHL EBX,0x10                        ; 0044dd90
    MOV EAX,dword ptr [EDX + EAX*0x4]   ; 0044dd93
    MOV dword ptr [ESP + 0x4],EBX       ; 0044dd96
    MOV dword ptr [ESP + 0x8],EAX       ; 0044dd9a
    TEST EAX,EAX                        ; 0044dd9e
    JNZ 0x0044ddb9                      ; 0044dda0
        ;   XREF to: 0044ddb9 (CONDITIONAL_JUMP)  ; LAB_0044ddb9
    MOV dword ptr [ESP + 0x8],0x7fffffff ; 0044dda2
    MOV ESI,ESP                         ; 0044ddaa
    MOV EDI,ECX                         ; 0044ddac
    MOVSD ES:EDI,ESI                    ; 0044ddae
    MOVSD ES:EDI,ESI                    ; 0044ddaf
    MOVSD ES:EDI,ESI                    ; 0044ddb0
    MOV EAX,ECX                         ; 0044ddb1
    ADD ESP,0xc                         ; 0044ddb3
    POP EDI                             ; 0044ddb6
    POP EBX                             ; 0044ddb7
    RET                                 ; 0044ddb8
    MOV EAX,0x7fffffff                  ; 0044ddb9
        ;   Label: LAB_0044ddb9
    MOV EDX,EAX                         ; 0044ddbe
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044ddc0
    SAR EDX,0x1f                        ; 0044ddc4
    IDIV EBX                            ; 0044ddc7
    MOV dword ptr [ESP + 0x8],EAX       ; 0044ddc9
    MOV ESI,ESP                         ; 0044ddcd
    MOV EDI,ECX                         ; 0044ddcf
    MOVSD ES:EDI,ESI                    ; 0044ddd1
    MOVSD ES:EDI,ESI                    ; 0044ddd2
    MOVSD ES:EDI,ESI                    ; 0044ddd3
    MOV EAX,ECX                         ; 0044ddd4
    ADD ESP,0xc                         ; 0044ddd6
    POP EDI                             ; 0044ddd9
    POP EBX                             ; 0044ddda
    RET                                 ; 0044dddb

