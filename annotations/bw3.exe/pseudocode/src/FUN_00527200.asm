; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00527200(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_00529a70 at 0052c397
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00527200
        ;   Label: FUN_00527200
    SUB ESP,0xc                         ; 00527201
    MOV EAX,ESI                         ; 00527204
    MOV EDX,dword ptr [ESP + 0x14]      ; 00527206
    MOV dword ptr [ESP],EDX             ; 0052720a
    MOV EDX,dword ptr [ESP + 0x18]      ; 0052720d
    MOV EDI,ESI                         ; 00527211
    MOV dword ptr [ESP + 0x8],EDX       ; 00527213
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00527217
    MOV ESI,ESP                         ; 0052721b
    MOV dword ptr [ESP + 0x4],EDX       ; 0052721d
    MOVSD ES:EDI,ESI                    ; 00527221
    MOVSD ES:EDI,ESI                    ; 00527222
    MOVSD ES:EDI,ESI                    ; 00527223
    ADD ESP,0xc                         ; 00527224
    POP EDI                             ; 00527227
    RET                                 ; 00527228

