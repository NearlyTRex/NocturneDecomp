; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051cc20(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   FUN_0051ce40 at 0051ded9
;
; Referenced Globals:
;   undefined4 DAT_005e9db2
;   undefined4 DAT_005e9db6
;
; Called Functions:
;   FUN_00408b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051cc20
        ;   Label: FUN_0051cc20
    PUSH ESI                            ; 0051cc21
    PUSH EDI                            ; 0051cc22
    SUB ESP,0x3c                        ; 0051cc23
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0051cc26
    CMP dword ptr [EBX + 0xc290],0x0    ; 0051cc2a
    JZ 0x0051ccbf                       ; 0051cc31
        ;   XREF to: 0051ccbf (CONDITIONAL_JUMP)  ; LAB_0051ccbf
    MOV ESI,0xc0166666                  ; 0051cc37
    MOV EDI,0xbfcccccd                  ; 0051cc3c
    MOV ECX,0xc00ccccd                  ; 0051cc41
    LEA EAX,[ESP + 0x18]                ; 0051cc46
    MOV dword ptr [ESP + 0x10],ESI      ; 0051cc4a
    MOV dword ptr [ESP + 0x14],EDI      ; 0051cc4e
    LEA ESI,[ESP + 0xc]                 ; 0051cc52
    MOV dword ptr [ESP + 0xc],ECX       ; 0051cc56
    CMP EAX,ESI                         ; 0051cc5a
    JZ 0x0051cc6f                       ; 0051cc5c
        ;   XREF to: 0051cc6f (CONDITIONAL_JUMP)  ; LAB_0051cc6f
    MOV EAX,0xc0166666                  ; 0051cc5e
    MOV dword ptr [ESP + 0x20],EDI      ; 0051cc63
    MOV dword ptr [ESP + 0x18],ECX      ; 0051cc67
    MOV dword ptr [ESP + 0x1c],EAX      ; 0051cc6b
    MOV EAX,dword ptr [EBX + 0xc28c]    ; 0051cc6f
        ;   Label: LAB_0051cc6f
    FLD float ptr [EAX + 0x34]          ; 0051cc75
    FADD float ptr [0x005e9db6]         ; 0051cc78 | DAT_005e9db6
    FSTP float ptr [EBX + 0x34]         ; 0051cc7e
        ;   Label: LAB_0051cc7e
    LEA EAX,[ESP + 0x18]                ; 0051cc81
    PUSH EAX                            ; 0051cc85
    MOV ECX,dword ptr [EBX + 0xc28c]    ; 0051cc86
    PUSH ECX                            ; 0051cc8c
    LEA ESI,[ESP + 0x38]                ; 0051cc8d
    LEA EDI,[ESP + 0x8]                 ; 0051cc91
    CALL FUN_00408b40                   ; 0051cc95
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x38]                ; 0051cc9a
    ADD ESP,0x8                         ; 0051cc9e
    MOVSD ES:EDI,ESI                    ; 0051cca1
    MOVSD ES:EDI,ESI                    ; 0051cca2
    MOVSD ES:EDI,ESI                    ; 0051cca3
    MOV EAX,dword ptr [ESP]             ; 0051cca4
    MOV dword ptr [EBX + 0x20],EAX      ; 0051cca7
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051ccaa
    MOV dword ptr [EBX + 0x24],EAX      ; 0051ccae
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051ccb1
    MOV dword ptr [EBX + 0x28],EAX      ; 0051ccb5
    ADD ESP,0x3c                        ; 0051ccb8
    POP EDI                             ; 0051ccbb
    POP ESI                             ; 0051ccbc
    POP EBX                             ; 0051ccbd
    RET                                 ; 0051ccbe
    MOV ESI,0xc0166666                  ; 0051ccbf
        ;   Label: LAB_0051ccbf
    MOV EDI,0xbfcccccd                  ; 0051ccc4
    MOV ECX,0x400ccccd                  ; 0051ccc9
    LEA EAX,[ESP + 0x24]                ; 0051ccce
    MOV dword ptr [ESP + 0x28],ESI      ; 0051ccd2
    MOV dword ptr [ESP + 0x2c],EDI      ; 0051ccd6
    LEA ESI,[ESP + 0x18]                ; 0051ccda
    MOV dword ptr [ESP + 0x24],ECX      ; 0051ccde
    CMP ESI,EAX                         ; 0051cce2
    JZ 0x0051ccf7                       ; 0051cce4
        ;   XREF to: 0051ccf7 (CONDITIONAL_JUMP)  ; LAB_0051ccf7
    MOV EAX,0xc0166666                  ; 0051cce6
    MOV dword ptr [ESP + 0x20],EDI      ; 0051cceb
    MOV dword ptr [ESP + 0x18],ECX      ; 0051ccef
    MOV dword ptr [ESP + 0x1c],EAX      ; 0051ccf3
    MOV EAX,dword ptr [EBX + 0xc28c]    ; 0051ccf7
        ;   Label: LAB_0051ccf7
    FLD float ptr [EAX + 0x34]          ; 0051ccfd
    FADD float ptr [0x005e9db2]         ; 0051cd00 | DAT_005e9db2
    JMP 0x0051cc7e                      ; 0051cd06
        ;   XREF to: 0051cc7e (UNCONDITIONAL_JUMP)  ; LAB_0051cc7e

