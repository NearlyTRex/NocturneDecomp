; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0040dea0(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[44]:
;   FUN_00412480 at 0041287b
;   FUN_00412de0 at 00412e8a
;   FUN_00413780 at 00413785
;   FUN_00413800 at 00413fa1
;   FUN_004145f0 at 0041469a
;   FUN_00417eb0 at 00417eb5
;   FUN_0041fe40 at 004201c7
;   FUN_00420a10 at 00420aaf
;   FUN_00420c40 at 00420d1f
;   FUN_004277f0 at 0042783d
;   ... and 34 more
;
; Referenced Globals:
;   undefined4 DAT_00578061
;   undefined4 DAT_00578065
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c77828
;
; Called Functions:
;   FUN_0040dd30
;   FUN_0056488c
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0040dea0
        ;   Label: FUN_0040dea0
    MOV EAX,[0x005b9354]                ; 0040dea3 | DAT_005b9354
    CMP dword ptr [EAX + 0x23c],0x0     ; 0040dea8 | DAT_01c77828
    JZ 0x0040dedd                       ; 0040deaf
        ;   XREF to: 0040dedd (CONDITIONAL_JUMP)  ; LAB_0040dedd
    CALL FUN_0040dd30                   ; 0040deb1
        ;   XREF to: 0040dd30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dd30()
    MOV dword ptr [ESP + 0x4],EAX       ; 0040deb6
    FILD dword ptr [ESP + 0x4]          ; 0040deba
    FMUL float ptr [0x00578065]         ; 0040debe | DAT_00578065
    FSTP float ptr [ESP]                ; 0040dec4
        ;   Label: LAB_0040dec4
    FLD float ptr [ESP]                 ; 0040dec7
    FCOMP float ptr [ESP + 0xc]         ; 0040deca
    FNSTSW AX                           ; 0040dece
    SAHF                                ; 0040ded0
    SETC AL                             ; 0040ded1
    AND EAX,0xff                        ; 0040ded4
    ADD ESP,0x8                         ; 0040ded9
    RET                                 ; 0040dedc
    CALL FUN_0056488c                   ; 0040dedd
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined FUN_0056488c()
        ;   Label: LAB_0040dedd
    MOV dword ptr [ESP + 0x4],EAX       ; 0040dee2
    FILD dword ptr [ESP + 0x4]          ; 0040dee6
    FMUL float ptr [0x00578061]         ; 0040deea | DAT_00578061
    JMP 0x0040dec4                      ; 0040def0
        ;   XREF to: 0040dec4 (UNCONDITIONAL_JUMP)  ; LAB_0040dec4

