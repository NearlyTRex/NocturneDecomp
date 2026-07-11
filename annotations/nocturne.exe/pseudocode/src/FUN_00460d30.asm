; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_00460d30(undefined4 param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[10]:
;   FUN_0044ce80 at 0044cea8
;   FUN_0044f0b0 at 0044f225
;   FUN_0044f9b0 at 0044f9e1
;   FUN_00450520 at 0045055c
;   FUN_00451350 at 004514a2
;   FUN_00485a90 at 00485b5a
;   FUN_00488580 at 00488660
;   FUN_0050d2d0 at 0050d317
;   FUN_0050e080 at 0050e097
;   FUN_00549310 at 00549336
;
; Referenced Globals:
;   undefined4 DAT_0057dc6d
;
; Called Functions:
;   FUN_004ce760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460d30
        ;   Label: FUN_00460d30
    PUSH ESI                            ; 00460d31
    PUSH EBP                            ; 00460d32
    MOV EBP,ESP                         ; 00460d33
    SUB ESP,0x10                        ; 00460d35
    AND ESP,0xfffffff8                  ; 00460d38
    MOV EBX,dword ptr [EBP + 0x14]      ; 00460d3b
    MOV ESI,ESP                         ; 00460d3e
    CALL FUN_004ce760                   ; 00460d40
        ;   XREF to: 004ce760 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce760()
    MOV EAX,dword ptr [ESP]             ; 00460d45
    MOV dword ptr [ESP + 0xc],EAX       ; 00460d48
    FLD double ptr [0x0057dc6d]         ; 00460d4c | DAT_0057dc6d
    FILD dword ptr [ESP + 0xc]          ; 00460d52
    FMUL ST1                            ; 00460d56
    FSTP float ptr [EBX]                ; 00460d58
    MOV EAX,dword ptr [ESP + 0x4]       ; 00460d5a
    MOV dword ptr [ESP + 0xc],EAX       ; 00460d5e
    FILD dword ptr [ESP + 0xc]          ; 00460d62
    FMUL ST1                            ; 00460d66
    FSTP float ptr [EBX + 0x4]          ; 00460d68
    MOV EAX,dword ptr [ESP + 0x8]       ; 00460d6b
    MOV dword ptr [ESP + 0xc],EAX       ; 00460d6f
    FILD dword ptr [ESP + 0xc]          ; 00460d73
    FMULP                               ; 00460d77
    MOV EAX,EBX                         ; 00460d79
    FSTP float ptr [EBX + 0x8]          ; 00460d7b
    MOV ESP,EBP                         ; 00460d7e
    POP EBP                             ; 00460d80
    POP ESI                             ; 00460d81
    POP EBX                             ; 00460d82
    RET                                 ; 00460d83

