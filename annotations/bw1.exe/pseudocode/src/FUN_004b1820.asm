; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b1820(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[1]:
;   FUN_004b4dd0 at 004b4fcc
;
; Referenced Globals:
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01ccf624
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004b1820
        ;   Label: FUN_004b1820
    MOV EBP,ESP                         ; 004b1821
    SUB ESP,0x8                         ; 004b1823
    AND ESP,0xfffffff8                  ; 004b1826
    MOV EDX,dword ptr [EBP + 0x8]       ; 004b1829
    FLDZ                                ; 004b182c
    FLD float ptr [EDX + 0xc]           ; 004b182e
    FSTP double ptr [ESP]               ; 004b1831
    FCOMP double ptr [ESP]              ; 004b1834
    FNSTSW AX                           ; 004b1837
    SAHF                                ; 004b1839
    JNC 0x004b1856                      ; 004b183a
        ;   XREF to: 004b1856 (CONDITIONAL_JUMP)  ; LAB_004b1856
    MOV EAX,[0x0061d95c]                ; 004b183c | DAT_0061d95c
    FLD float ptr [EAX + 0x294]         ; 004b1841 | DAT_01ccf624
    FSUBR double ptr [ESP]              ; 004b1847
    FST float ptr [EDX + 0xc]           ; 004b184a
    FLDZ                                ; 004b184d
    FCOMPP                              ; 004b184f
    FNSTSW AX                           ; 004b1851
    SAHF                                ; 004b1853
    JA 0x004b185a                       ; 004b1854
        ;   XREF to: 004b185a (CONDITIONAL_JUMP)  ; LAB_004b185a
    MOV ESP,EBP                         ; 004b1856
        ;   Label: LAB_004b1856
    POP EBP                             ; 004b1858
    RET                                 ; 004b1859
    MOV dword ptr [EDX + 0xc],0x0       ; 004b185a
        ;   Label: LAB_004b185a
    MOV ESP,EBP                         ; 004b1861
    POP EBP                             ; 004b1863
    RET                                 ; 004b1864

