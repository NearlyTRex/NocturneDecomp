; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_unknown_c_fclose_FUN_005634b0(_FILE *file_handle,int force_close_flag)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_handle
; int              Stack[0x8]:4   force_close_flag
;
; XREF[2]:
;   crt_unknown.c_FUN_005656a4 at 005656c8
;   crt_unknown.c___CClose_FUN_005633c4 at 005633cf
;
; Referenced Globals:
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4 = 005671e4
;   void* PTR_crt_io.c_invalidate_handle_wrapper_FUN_005671f8_005c1acc = 005671f8
;
; Called Functions:
;   crt_io.c_close_FUN_00568a50
;   crt_io.c_invalidate_handle_wrapper_FUN_005671f8
;   crt_stdio.c_ftell_FUN_00566e70
;   crt_stdio.c_lseek_FUN_005689c0
;   crt_stdio.c_remove_FUN_005657c0
;   crt_sync.c_CriticalSectionStub_FUN_005671e4
;   crt_unknown.c__tempnam_FUN_005633fc
;   crt_unknown.c_FUN_005638d0
;   FUN_00568890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005634b0
        ;   Label: crt_unknown.c_fclose_FUN_005634b0
    PUSH ESI                            ; 005634b1
    PUSH EDI                            ; 005634b2
    PUSH EBP                            ; 005634b3
    SUB ESP,0x114                       ; 005634b4
    MOV EBX,dword ptr [ESP + 0x128]     ; 005634ba
    CMP dword ptr [EBX + 0xc],0x0       ; 005634c1
    JNZ 0x005634d1                      ; 005634c5
        ;   XREF to: 005634d1 (CONDITIONAL_JUMP)  ; LAB_005634d1
    MOV EAX,0xffffffff                  ; 005634c7
    JMP 0x00563597                      ; 005634cc
        ;   XREF to: 00563597 (UNCONDITIONAL_JUMP)  ; LAB_00563597
    MOV AH,byte ptr [EBX + 0xd]         ; 005634d1
        ;   Label: LAB_005634d1
    XOR ESI,ESI                         ; 005634d4
    TEST AH,0x10                        ; 005634d6
    JZ 0x005634e6                       ; 005634d9
        ;   XREF to: 005634e6 (CONDITIONAL_JUMP)  ; LAB_005634e6
    PUSH EBX                            ; 005634db
    CALL FUN_00568890                   ; 005634dc
        ;   XREF to: 00568890 (UNCONDITIONAL_CALL)  ; undefined FUN_00568890()
    ADD ESP,0x4                         ; 005634e1
    MOV ESI,EAX                         ; 005634e4
    MOV ECX,dword ptr [EBX + 0x10]      ; 005634e6
        ;   Label: LAB_005634e6
    PUSH ECX                            ; 005634e9
    CALL dword ptr [0x005c1ac0]         ; 005634ea | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0
    ADD ESP,0x4                         ; 005634f0
    PUSH EBX                            ; 005634f3
    CALL crt_stdio.c_ftell_FUN_00566e70 ; 005634f4
        ;   XREF to: 00566e70 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00566e70(_FILE * file_handle)
    ADD ESP,0x4                         ; 005634f9
    CMP EAX,-0x1                        ; 005634fc
    JZ 0x00563510                       ; 005634ff
        ;   XREF to: 00563510 (CONDITIONAL_JUMP)  ; LAB_00563510
    PUSH 0x0                            ; 00563501
    PUSH EAX                            ; 00563503
    MOV EDI,dword ptr [EBX + 0x10]      ; 00563504
    PUSH EDI                            ; 00563507
    CALL crt_stdio.c_lseek_FUN_005689c0 ; 00563508
        ;   XREF to: 005689c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_005689c0(int file_handle_index, long distance_to_move, int move_method)
    ADD ESP,0xc                         ; 0056350d
    CMP dword ptr [ESP + 0x12c],0x0     ; 00563510
        ;   Label: LAB_00563510
    JZ 0x00563528                       ; 00563518
        ;   XREF to: 00563528 (CONDITIONAL_JUMP)  ; LAB_00563528
    MOV EAX,dword ptr [EBX + 0x10]      ; 0056351a
    PUSH EAX                            ; 0056351d
    CALL crt_io.c_close_FUN_00568a50    ; 0056351e
        ;   XREF to: 00568a50 (UNCONDITIONAL_CALL)  ; int crt_io.c_close_FUN_00568a50(int fd)
    ADD ESP,0x4                         ; 00563523
    OR ESI,EAX                          ; 00563526
    TEST byte ptr [EBX + 0xc],0x8       ; 00563528
        ;   Label: LAB_00563528
    JZ 0x00563547                       ; 0056352c
        ;   XREF to: 00563547 (CONDITIONAL_JUMP)  ; LAB_00563547
    MOV EAX,dword ptr [EBX + 0x8]       ; 0056352e
    MOV EDX,dword ptr [EAX + 0x8]       ; 00563531
    PUSH EDX                            ; 00563534
    CALL crt_unknown.c_FUN_005638d0     ; 00563535
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    MOV EAX,dword ptr [EBX + 0x8]       ; 0056353a
    ADD ESP,0x4                         ; 0056353d
    MOV dword ptr [EAX + 0x8],0x0       ; 00563540
    TEST byte ptr [EBX + 0xd],0x8       ; 00563547
        ;   Label: LAB_00563547
    JZ 0x00563571                       ; 0056354b
        ;   XREF to: 00563571 (CONDITIONAL_JUMP)  ; LAB_00563571
    MOV EAX,dword ptr [EBX + 0x8]       ; 0056354d
    MOV AL,byte ptr [EAX + 0x14]        ; 00563550
    AND EAX,0xff                        ; 00563553
    PUSH EAX                            ; 00563558
    LEA EAX,[ESP + 0x4]                 ; 00563559
    PUSH EAX                            ; 0056355d
    CALL crt_unknown.c__tempnam_FUN_005633fc ; 0056355e
        ;   XREF to: 005633fc (UNCONDITIONAL_CALL)  ; void crt_unknown.c__tempnam_FUN_005633fc(char * buffer, int file_handle)
    ADD ESP,0x8                         ; 00563563
    MOV EAX,ESP                         ; 00563566
    PUSH EAX                            ; 00563568
    CALL crt_stdio.c_remove_FUN_005657c0 ; 00563569
        ;   XREF to: 005657c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005657c0(char * filename)
    ADD ESP,0x4                         ; 0056356e
    MOV ECX,dword ptr [EBX + 0x10]      ; 00563571
        ;   Label: LAB_00563571
    PUSH ECX                            ; 00563574
    CALL dword ptr [0x005c1ac4]         ; 00563575 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    ADD ESP,0x4                         ; 0056357b
    CMP dword ptr [ESP + 0x12c],0x0     ; 0056357e
    JZ 0x00563595                       ; 00563586
        ;   XREF to: 00563595 (CONDITIONAL_JUMP)  ; LAB_00563595
    MOV EBP,dword ptr [EBX + 0x10]      ; 00563588
    PUSH EBP                            ; 0056358b
    CALL dword ptr [0x005c1acc]         ; 0056358c | PTR_crt_io.c_invalidate_handle_wrapper_FUN_005671f8_005c1acc
    ADD ESP,0x4                         ; 00563592
    MOV EAX,ESI                         ; 00563595
        ;   Label: LAB_00563595
    ADD ESP,0x114                       ; 00563597
        ;   Label: LAB_00563597
    POP EBP                             ; 0056359d
    POP EDI                             ; 0056359e
    POP ESI                             ; 0056359f
    POP EBX                             ; 005635a0
    RET                                 ; 005635a1

