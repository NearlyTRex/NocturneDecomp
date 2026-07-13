; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00563350(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[47]:
;   FUN_00401010 at 004010d1
;   FUN_0040c160 at 0040c19e
;   FUN_0040c450 at 0040c474
;   FUN_0040c4f0 at 0040c514
;   FUN_0040c590 at 0040c5b9
;   FUN_0040c630 at 0040c658
;   FUN_0040c6d0 at 0040c74f
;   FUN_0040c880 at 0040c89c
;   FUN_0040c900 at 0040c91d
;   FUN_0040cbf0 at 0040cc39
;   ... and 37 more
;
; Called Functions:
;   FUN_005632c8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563350
        ;   Label: FUN_00563350
    SUB ESP,0x4                         ; 00563351
    LEA EAX,[ESP + 0x14]                ; 00563354
    MOV dword ptr [ESP],EAX             ; 00563358
    MOV EAX,ESP                         ; 0056335b
    PUSH EAX                            ; 0056335d
    MOV EDX,dword ptr [ESP + 0x14]      ; 0056335e
    PUSH EDX                            ; 00563362
    MOV EBX,dword ptr [ESP + 0x14]      ; 00563363
    PUSH EBX                            ; 00563367
    CALL FUN_005632c8                   ; 00563368
        ;   XREF to: 005632c8 (UNCONDITIONAL_CALL)  ; undefined FUN_005632c8()
    ADD ESP,0xc                         ; 0056336d
    ADD ESP,0x4                         ; 00563370
    POP EBX                             ; 00563373
    RET                                 ; 00563374

