; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004546d0(int param_1,int *param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_0044ef30 at 0044f05e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004546d0
        ;   Label: FUN_004546d0
    PUSH EDI                            ; 004546d1
    PUSH EBP                            ; 004546d2
    SUB ESP,0x20                        ; 004546d3
    MOV EDI,dword ptr [ESP + 0x30]      ; 004546d6
    MOV ECX,dword ptr [ESP + 0x34]      ; 004546da
    MOV EBP,ESI                         ; 004546de
    MOV EAX,dword ptr [ECX + 0x8]       ; 004546e0
    MOV EDX,dword ptr [EDI + 0x1c8]     ; 004546e3
    MOV dword ptr [ESP + 0x8],EAX       ; 004546e9
    MOV EAX,dword ptr [ECX]             ; 004546ed
    MOV EBX,dword ptr [EDI + 0x1c0]     ; 004546ef
    SUB EAX,EDX                         ; 004546f5
    MOV EDX,dword ptr [ESP + 0x8]       ; 004546f7
    IMUL EDX                            ; 004546fb
    IDIV EBX                            ; 004546fd
    MOV EDX,dword ptr [ESP + 0x8]       ; 004546ff
    MOV ESI,EAX                         ; 00454703
    MOV dword ptr [ESP],EAX             ; 00454705
    MOV EAX,dword ptr [ECX + 0x4]       ; 00454708
    MOV ECX,dword ptr [EDI + 0x1cc]     ; 0045470b
    MOV EBX,dword ptr [EDI + 0x1c4]     ; 00454711
    SUB EAX,ECX                         ; 00454717
    MOV ECX,dword ptr [ESP + 0x38]      ; 00454719
    IMUL EDX                            ; 0045471d
    IDIV EBX                            ; 0045471f
    SHL ECX,0x2                         ; 00454721
    MOV EBX,EAX                         ; 00454724
    ADD ECX,EDI                         ; 00454726
    MOV dword ptr [ESP + 0x4],EAX       ; 00454728
    MOV EDX,ESI                         ; 0045472c
    MOV EAX,dword ptr [ECX + 0x136c]    ; 0045472e
    IMUL EDX                            ; 00454734
    SHRD EAX,EDX,0x10                   ; 00454736
    MOV dword ptr [ESP + 0x18],EAX      ; 0045473a
    MOV EDX,EBX                         ; 0045473e
    MOV EAX,dword ptr [ECX + 0x13cc]    ; 00454740
    IMUL EDX                            ; 00454746
    SHRD EAX,EDX,0x10                   ; 00454748
    MOV EDX,dword ptr [ESP + 0x18]      ; 0045474c
    ADD EDX,EAX                         ; 00454750
    MOV dword ptr [ESP + 0x18],EDX      ; 00454752
    MOV EAX,dword ptr [ECX + 0x142c]    ; 00454756
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045475c
    IMUL EDX                            ; 00454760
    SHRD EAX,EDX,0x10                   ; 00454762
    MOV EDX,dword ptr [ESP + 0x18]      ; 00454766
    ADD EDX,EAX                         ; 0045476a
    MOV EAX,dword ptr [ESP + 0x38]      ; 0045476c
    MOV dword ptr [ESP + 0x18],EAX      ; 00454770
    MOV dword ptr [ESP + 0x1c],EDX      ; 00454774
    MOV EDX,dword ptr [ESP + 0x18]      ; 00454778
    SHL EAX,0x2                         ; 0045477c
    SUB EAX,EDX                         ; 0045477f
    SHL EAX,0x2                         ; 00454781
    ADD EDI,EAX                         ; 00454784
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00454786
    MOV EDX,dword ptr [EDI + 0x11ec]    ; 0045478a
    ADD EAX,EDX                         ; 00454790
    MOV dword ptr [ESP + 0xc],EAX       ; 00454792
    MOV EDX,ESI                         ; 00454796
    MOV EAX,dword ptr [ECX + 0x138c]    ; 00454798
    IMUL EDX                            ; 0045479e
    SHRD EAX,EDX,0x10                   ; 004547a0
    MOV dword ptr [ESP + 0x18],EAX      ; 004547a4
    MOV EDX,EBX                         ; 004547a8
    MOV EAX,dword ptr [ECX + 0x13ec]    ; 004547aa
    IMUL EDX                            ; 004547b0
    SHRD EAX,EDX,0x10                   ; 004547b2
    MOV EDX,dword ptr [ESP + 0x18]      ; 004547b6
    ADD EDX,EAX                         ; 004547ba
    MOV dword ptr [ESP + 0x18],EDX      ; 004547bc
    MOV EAX,dword ptr [ECX + 0x144c]    ; 004547c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004547c6
    IMUL EDX                            ; 004547ca
    SHRD EAX,EDX,0x10                   ; 004547cc
    ADD EAX,dword ptr [ESP + 0x18]      ; 004547d0
    MOV EDX,dword ptr [EDI + 0x11f0]    ; 004547d4
    ADD EDX,EAX                         ; 004547da
    MOV dword ptr [ESP + 0x10],EDX      ; 004547dc
    MOV EDX,ESI                         ; 004547e0
    MOV EAX,dword ptr [ECX + 0x13ac]    ; 004547e2
    IMUL EDX                            ; 004547e8
    SHRD EAX,EDX,0x10                   ; 004547ea
    MOV ESI,EAX                         ; 004547ee
    MOV EDX,EBX                         ; 004547f0
    MOV EAX,dword ptr [ECX + 0x140c]    ; 004547f2
    IMUL EDX                            ; 004547f8
    SHRD EAX,EDX,0x10                   ; 004547fa
    MOV EDX,dword ptr [ESP + 0x8]       ; 004547fe
    ADD ESI,EAX                         ; 00454802
    MOV EAX,dword ptr [ECX + 0x146c]    ; 00454804
    IMUL EDX                            ; 0045480a
    SHRD EAX,EDX,0x10                   ; 0045480c
    MOV EDX,dword ptr [EDI + 0x11f4]    ; 00454810
    ADD EAX,ESI                         ; 00454816
    LEA ESI,[ESP + 0xc]                 ; 00454818
    ADD EDX,EAX                         ; 0045481c
    MOV EDI,EBP                         ; 0045481e
    MOV dword ptr [ESP + 0x14],EDX      ; 00454820
    MOVSD ES:EDI,ESI                    ; 00454824
    MOVSD ES:EDI,ESI                    ; 00454825
    MOVSD ES:EDI,ESI                    ; 00454826
    MOV EAX,EBP                         ; 00454827
    ADD ESP,0x20                        ; 00454829
    POP EBP                             ; 0045482c
    POP EDI                             ; 0045482d
    POP EBX                             ; 0045482e
    RET                                 ; 0045482f

