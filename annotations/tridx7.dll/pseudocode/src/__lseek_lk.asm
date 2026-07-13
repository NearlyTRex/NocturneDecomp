; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD __lseek_lk(uint param_1,LONG param_2,DWORD param_3)
;
;
; XREF[5]:
;   FUN_10008fb0 at 10009011
;   FUN_100093f0 at 1000971b
;   FUN_1000b720 at 1000b900
;   __chsize_lk at 1000b57b
;   __write at 1000a632
;
; Referenced Globals:
;   undefined4 DAT_10241870
;   void* PTR_GetLastError_102421c8 = 00242418
;   void* PTR_SetFilePointer_10242248 = 0024263c
;
; Called Functions:
;   __dosmaperr
;   FUN_10008a20
;   FUN_10008cd0
;   GetLastError
;   SetFilePointer
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 1000a670
        ;   Label: __lseek_lk
    PUSH EDI                            ; 1000a671
    MOV ESI,dword ptr [ESP + 0xc]       ; 1000a672
    PUSH ESI                            ; 1000a676
    CALL FUN_10008cd0                   ; 1000a677
        ;   XREF to: 10008cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_10008cd0()
    ADD ESP,0x4                         ; 1000a67c
    CMP EAX,-0x1                        ; 1000a67f
    JNZ 0x1000a697                      ; 1000a682
        ;   XREF to: 1000a697 (CONDITIONAL_JUMP)  ; LAB_1000a697
    CALL FUN_10008a20                   ; 1000a684
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a20()
    POP EDI                             ; 1000a689
    MOV dword ptr [EAX],0x9             ; 1000a68a
    MOV EAX,0xffffffff                  ; 1000a690
    POP ESI                             ; 1000a695
    RET                                 ; 1000a696
    MOV ECX,dword ptr [ESP + 0x14]      ; 1000a697
        ;   Label: LAB_1000a697
    MOV EDX,dword ptr [ESP + 0x10]      ; 1000a69b
    PUSH ECX                            ; 1000a69f
    PUSH 0x0                            ; 1000a6a0
    PUSH EDX                            ; 1000a6a2
    PUSH EAX                            ; 1000a6a3
    CALL dword ptr [0x10242248]         ; 1000a6a4 | PTR_SetFilePointer_10242248
    CMP EAX,-0x1                        ; 1000a6aa
    MOV EDI,EAX                         ; 1000a6ad
    MOV EAX,0x0                         ; 1000a6af
    JNZ 0x1000a6bc                      ; 1000a6b4
        ;   XREF to: 1000a6bc (CONDITIONAL_JUMP)  ; LAB_1000a6bc
    CALL dword ptr [0x102421c8]         ; 1000a6b6 | PTR_GetLastError_102421c8
    TEST EAX,EAX                        ; 1000a6bc
        ;   Label: LAB_1000a6bc
    JZ 0x1000a6d1                       ; 1000a6be
        ;   XREF to: 1000a6d1 (CONDITIONAL_JUMP)  ; LAB_1000a6d1
    PUSH EAX                            ; 1000a6c0
    CALL __dosmaperr                    ; 1000a6c1
        ;   XREF to: 100089a0 (UNCONDITIONAL_CALL)  ; void __dosmaperr(ulong param_1)
    ADD ESP,0x4                         ; 1000a6c6
    MOV EAX,0xffffffff                  ; 1000a6c9
    POP EDI                             ; 1000a6ce
    POP ESI                             ; 1000a6cf
    RET                                 ; 1000a6d0
    MOV EAX,ESI                         ; 1000a6d1
        ;   Label: LAB_1000a6d1
    AND ESI,0x1f                        ; 1000a6d3
    SHL ESI,0x2                         ; 1000a6d6
    AND EAX,0xffffffe7                  ; 1000a6d9
    SAR EAX,0x3                         ; 1000a6dc
    MOV ECX,dword ptr [EAX + 0x10241870] ; 1000a6df | DAT_10241870
    LEA EAX,[ESI + ESI*0x8]             ; 1000a6e5
    AND byte ptr [ECX + EAX*0x1 + 0x4],0xfd ; 1000a6e8
    MOV EAX,EDI                         ; 1000a6ed
    POP EDI                             ; 1000a6ef
    POP ESI                             ; 1000a6f0
    RET                                 ; 1000a6f1

