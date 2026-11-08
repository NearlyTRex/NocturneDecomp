; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042cd30(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[36]:
;   FUN_0040fb40 at 0040fda2
;   FUN_004179b0 at 00418005
;   FUN_00419b40 at 0041a157
;   FUN_00425da0 at 00426b23
;   FUN_00442a20 at 00443598
;   FUN_00445130 at 0044536e
;   FUN_00455080 at 00455d36
;   FUN_004628b0 at 00462b69
;   FUN_004c5350 at 004c55ad
;   FUN_004c6eb0 at 004c7032
;   ... and 26 more
;
; Called Functions:
;   FUN_00433220
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0042cd30
        ;   Label: FUN_0042cd30
    PUSH EDI                            ; 0042cd31
    SUB ESP,0xc                         ; 0042cd32
    MOV EAX,dword ptr [ESP + 0x18]      ; 0042cd35
    MOV EDI,ESP                         ; 0042cd39
    LEA ESI,[EAX + 0x30]                ; 0042cd3b
    MOV EDX,ESP                         ; 0042cd3e
    MOVSD ES:EDI,ESI                    ; 0042cd40
    MOVSD ES:EDI,ESI                    ; 0042cd41
    MOVSD ES:EDI,ESI                    ; 0042cd42
    PUSH EDX                            ; 0042cd43
    FLD float ptr [ESP + 0x8]           ; 0042cd44
    FADD float ptr [EAX + 0x2508]       ; 0042cd48
    PUSH EAX                            ; 0042cd4e
    FSTP float ptr [ESP + 0xc]          ; 0042cd4f
    MOV dword ptr [EAX + 0x2508],0x0    ; 0042cd53
    CALL FUN_00433220                   ; 0042cd5d
        ;   XREF to: 00433220 (UNCONDITIONAL_CALL)  ; undefined FUN_00433220()
    ADD ESP,0x8                         ; 0042cd62
    ADD ESP,0xc                         ; 0042cd65
    POP EDI                             ; 0042cd68
    POP ESI                             ; 0042cd69
    RET                                 ; 0042cd6a

