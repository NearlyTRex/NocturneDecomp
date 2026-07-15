; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_time_c__maketimefmt_FUN_1000d960(LCID lcid,__lc_time_data *tdata)
;
; Parameters:
; LCID             Stack[0x4]:4   lcid
; __lc_time_data * Stack[0x8]:4   tdata
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   crt_time.c___get_lc_time_FUN_1000d3a0 at 1000d703
;
; Called Functions:
;   crt_heap.c_free_FUN_10005b30
;   crt_heap.c_malloc_FUN_10008830
;   crt_locale.c___getlocaleinfo_FUN_1000f6e0
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 1000d960
        ;   Label: crt_time.c__maketimefmt_FUN_1000d960
    LEA EAX,[ESP + 0x8]                 ; 1000d963
    PUSH ESI                            ; 1000d967
    MOV dword ptr [ESP + 0xc],0x0       ; 1000d968
    MOV dword ptr [ESP + 0x8],0x0       ; 1000d970
    PUSH EDI                            ; 1000d978
    PUSH EAX                            ; 1000d979
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000d97a
    PUSH 0x23                           ; 1000d97e
    PUSH EDI                            ; 1000d980
    PUSH 0x0                            ; 1000d981
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d983
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d988
    MOV ESI,EAX                         ; 1000d98b
    LEA EAX,[ESP + 0xc]                 ; 1000d98d
    PUSH EAX                            ; 1000d991
    PUSH 0x25                           ; 1000d992
    PUSH EDI                            ; 1000d994
    PUSH 0x0                            ; 1000d995
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d997
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d99c
    OR ESI,EAX                          ; 1000d99f
    LEA EAX,[ESP + 0x8]                 ; 1000d9a1
    PUSH EAX                            ; 1000d9a5
    PUSH 0x1e                           ; 1000d9a6
    PUSH EDI                            ; 1000d9a8
    PUSH 0x1                            ; 1000d9a9
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000d9ab
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000d9b0
    OR ESI,EAX                          ; 1000d9b3
    JZ 0x1000d9bf                       ; 1000d9b5
        ;   XREF to: 1000d9bf (CONDITIONAL_JUMP)  ; LAB_1000d9bf
    MOV EAX,ESI                         ; 1000d9b7
    POP EDI                             ; 1000d9b9
    POP ESI                             ; 1000d9ba
    ADD ESP,0xc                         ; 1000d9bb
    RET                                 ; 1000d9be
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000d9bf
        ;   Label: LAB_1000d9bf
    PUSH 0xd                            ; 1000d9c3
    CALL crt_heap.c_malloc_FUN_10008830 ; 1000d9c5
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_malloc_FUN_10008830(size_t size)
    ADD ESP,0x4                         ; 1000d9ca
    MOV EDX,EAX                         ; 1000d9cd
    MOV dword ptr [EDI + 0xa8],EAX      ; 1000d9cf
    CMP dword ptr [ESP + 0x10],0x0      ; 1000d9d5
    JZ 0x1000d9ec                       ; 1000d9da
        ;   XREF to: 1000d9ec (CONDITIONAL_JUMP)  ; LAB_1000d9ec
    MOV byte ptr [EDX],0x48             ; 1000d9dc
    INC EDX                             ; 1000d9df
    CMP dword ptr [ESP + 0xc],0x0       ; 1000d9e0
    JZ 0x1000d9fb                       ; 1000d9e5
        ;   XREF to: 1000d9fb (CONDITIONAL_JUMP)  ; LAB_1000d9fb
    MOV byte ptr [EDX],0x48             ; 1000d9e7
    JMP 0x1000d9fa                      ; 1000d9ea
        ;   XREF to: 1000d9fa (UNCONDITIONAL_JUMP)  ; LAB_1000d9fa
    MOV byte ptr [EDX],0x68             ; 1000d9ec
        ;   Label: LAB_1000d9ec
    INC EDX                             ; 1000d9ef
    CMP dword ptr [ESP + 0xc],0x0       ; 1000d9f0
    JZ 0x1000d9fb                       ; 1000d9f5
        ;   XREF to: 1000d9fb (CONDITIONAL_JUMP)  ; LAB_1000d9fb
    MOV byte ptr [EDX],0x68             ; 1000d9f7
    INC EDX                             ; 1000d9fa
        ;   Label: LAB_1000d9fa
    MOV EAX,dword ptr [ESP + 0x8]       ; 1000d9fb
        ;   Label: LAB_1000d9fb
    CMP byte ptr [EAX],0x0              ; 1000d9ff
    JZ 0x1000da0f                       ; 1000da02
        ;   XREF to: 1000da0f (CONDITIONAL_JUMP)  ; LAB_1000da0f
    MOV CL,byte ptr [EAX]               ; 1000da04
        ;   Label: LAB_1000da04
    INC EAX                             ; 1000da06
    MOV byte ptr [EDX],CL               ; 1000da07
    INC EDX                             ; 1000da09
    CMP byte ptr [EAX],0x0              ; 1000da0a
    JNZ 0x1000da04                      ; 1000da0d
        ;   XREF to: 1000da04 (CONDITIONAL_JUMP)  ; LAB_1000da04
    MOV byte ptr [EDX],0x6d             ; 1000da0f
        ;   Label: LAB_1000da0f
    INC EDX                             ; 1000da12
    CMP dword ptr [ESP + 0xc],0x0       ; 1000da13
    JZ 0x1000da1e                       ; 1000da18
        ;   XREF to: 1000da1e (CONDITIONAL_JUMP)  ; LAB_1000da1e
    MOV byte ptr [EDX],0x6d             ; 1000da1a
    INC EDX                             ; 1000da1d
    MOV EAX,dword ptr [ESP + 0x8]       ; 1000da1e
        ;   Label: LAB_1000da1e
    CMP byte ptr [EAX],0x0              ; 1000da22
    JZ 0x1000da32                       ; 1000da25
        ;   XREF to: 1000da32 (CONDITIONAL_JUMP)  ; LAB_1000da32
    MOV CL,byte ptr [EAX]               ; 1000da27
        ;   Label: LAB_1000da27
    INC EAX                             ; 1000da29
    MOV byte ptr [EDX],CL               ; 1000da2a
    INC EDX                             ; 1000da2c
    CMP byte ptr [EAX],0x0              ; 1000da2d
    JNZ 0x1000da27                      ; 1000da30
        ;   XREF to: 1000da27 (CONDITIONAL_JUMP)  ; LAB_1000da27
    MOV byte ptr [EDX],0x73             ; 1000da32
        ;   Label: LAB_1000da32
    MOV byte ptr [EDX + 0x1],0x73       ; 1000da35
    INC EDX                             ; 1000da39
    MOV byte ptr [EDX + 0x1],0x0        ; 1000da3a
    MOV EAX,dword ptr [ESP + 0x8]       ; 1000da3e
    PUSH EAX                            ; 1000da42
    CALL crt_heap.c_free_FUN_10005b30   ; 1000da43
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000da48
    MOV EAX,ESI                         ; 1000da4b
    POP EDI                             ; 1000da4d
    POP ESI                             ; 1000da4e
    ADD ESP,0xc                         ; 1000da4f
    RET                                 ; 1000da52

