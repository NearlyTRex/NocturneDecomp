; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_FUN_004ca410(CMansionPuzzleCircle *this_ptr)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_004c9430 at 004c9565
;
; Called Functions:
;   core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_004cae20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ca410
        ;   Label: core_manpuz.cpp_FUN_004ca410
    PUSH ESI                            ; 004ca411
    PUSH EDI                            ; 004ca412
    PUSH EBP                            ; 004ca413
    SUB ESP,0x4                         ; 004ca414
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ca417
    MOV EBX,EAX                         ; 004ca41b
    LEA ESI,[EAX + 0x30]                ; 004ca41d
    MOV dword ptr [EBX + 0x5ec],0x0     ; 004ca420
        ;   Label: LAB_004ca420
    MOV dword ptr [EBX + 0x5f0],0x0     ; 004ca42a
    MOV dword ptr [EBX + 0x634],0x0     ; 004ca434
    MOV dword ptr [EBX + 0x638],0x0     ; 004ca43e
    MOV dword ptr [EBX + 0x63c],0x0     ; 004ca448
    ADD EAX,0x4                         ; 004ca452
    MOV dword ptr [EBX + 0x5e8],0x1     ; 004ca455
    MOV dword ptr [EAX + 0x13f4],0x0    ; 004ca45f
    MOV dword ptr [EAX + 0x1424],0x0    ; 004ca469
    MOV dword ptr [EAX + 0x1454],0x0    ; 004ca473
    ADD EBX,0x64                        ; 004ca47d
    MOV dword ptr [EAX + 0x1484],0x0    ; 004ca480
    CMP EAX,ESI                         ; 004ca48a
    JNZ 0x004ca420                      ; 004ca48c
        ;   XREF to: 004ca420 (CONDITIONAL_JUMP)  ; LAB_004ca420
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ca48e
    MOV dword ptr [EAX + 0x63c],0xff    ; 004ca492
    MOV EBX,dword ptr [ESP + 0x18]      ; 004ca49c
    MOV EAX,dword ptr [EAX + 0x63c]     ; 004ca4a0
    MOV dword ptr [EBX + 0x698],0xff    ; 004ca4a6
    MOV dword ptr [EBX + 0x6fc],0xff    ; 004ca4b0
    MOV dword ptr [EBX + 0x714],0x0     ; 004ca4ba
    MOV dword ptr [EBX + 0x7c4],0xff    ; 004ca4c4
    MOV dword ptr [EBX + 0x830],0xff    ; 004ca4ce
    MOV dword ptr [EBX + 0x840],0x0     ; 004ca4d8
    MOV dword ptr [EBX + 0x8f0],0xff    ; 004ca4e2
    MOV dword ptr [EBX + 0x95c],0xff    ; 004ca4ec
    MOV dword ptr [EBX + 0x9b8],0xff    ; 004ca4f6
    MOV dword ptr [EBX + 0xa24],0xff    ; 004ca500
    MOV dword ptr [EBX + 0xa88],0xff    ; 004ca50a
    MOV dword ptr [EBX + 0x1458],0xff   ; 004ca514
    MOV dword ptr [EBX + 0x145c],0xff   ; 004ca51e
    MOV dword ptr [EBX + 0x1400],0xff   ; 004ca528
    MOV dword ptr [EBX + 0x1404],0xff   ; 004ca532
    MOV dword ptr [EBX + 0x1468],0xff   ; 004ca53c
    MOV dword ptr [EBX + 0x140c],0xff   ; 004ca546
    MOV dword ptr [EBX + 0x1410],0xff   ; 004ca550
    MOV dword ptr [EBX + 0x1474],0xff   ; 004ca55a
    MOV dword ptr [EBX + 0x1478],0xff   ; 004ca564
    MOV dword ptr [EBX + 0x147c],0xff   ; 004ca56e
    MOV dword ptr [EBX + 0x1420],0xff   ; 004ca578
    MOV dword ptr [EBX + 0x634],EAX     ; 004ca582
    MOV EAX,dword ptr [EBX + 0x1458]    ; 004ca588
    XOR ESI,ESI                         ; 004ca58e
    MOV dword ptr [EBX + 0x13f8],EAX    ; 004ca590
    LEA EAX,[EBX + 0xa98]               ; 004ca596
    MOV dword ptr [EBX + 0x1424],0xff   ; 004ca59c
    LEA EDI,[EBX + 0xa9c]               ; 004ca5a6
    MOV dword ptr [ESP],EAX             ; 004ca5ac
    LEA EBP,[EBX + 0xaa0]               ; 004ca5af
    IMUL EBX,ESI,0xb8                   ; 004ca5b5
        ;   Label: LAB_004ca5b5
    PUSH EBP                            ; 004ca5bb
    MOV EDX,dword ptr [ESP + 0x4]       ; 004ca5bc
    PUSH EDI                            ; 004ca5c0
    ADD EBX,EDX                         ; 004ca5c1
    PUSH EBX                            ; 004ca5c3
    PUSH ESI                            ; 004ca5c4
    MOV ECX,dword ptr [ESP + 0x28]      ; 004ca5c5
    PUSH ECX                            ; 004ca5c9
    ADD EBP,0xb8                        ; 004ca5ca
    ADD EDI,0xb8                        ; 004ca5d0
    CALL core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_004cae20 ; 004ca5d6
        ;   XREF to: 004cae20 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_004cae20()
    MOV dword ptr [EBX + 0x14],0x0      ; 004ca5db
    INC ESI                             ; 004ca5e2
    MOV dword ptr [EBX + 0x20],0x0      ; 004ca5e3
    ADD ESP,0x14                        ; 004ca5ea
    FLD float ptr [EBX + 0x20]          ; 004ca5ed
    MOV EAX,dword ptr [EBX + 0x14]      ; 004ca5f0
    MOV dword ptr [EBX + 0x10],EAX      ; 004ca5f3
    FST float ptr [EBX + 0x1c]          ; 004ca5f6
    MOV EAX,dword ptr [EBX + 0x10]      ; 004ca5f9
    MOV dword ptr [EBX + 0xc],EAX       ; 004ca5fc
    FSTP float ptr [EBX + 0x18]         ; 004ca5ff
    CMP ESI,0xc                         ; 004ca602
    JL 0x004ca5b5                       ; 004ca605
        ;   XREF to: 004ca5b5 (CONDITIONAL_JUMP)  ; LAB_004ca5b5
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ca607
    MOV dword ptr [EAX + 0x1394],0x1    ; 004ca60b
    MOV dword ptr [EAX + 0x13b0],0x0    ; 004ca615
    MOV dword ptr [EAX + 0x13f4],0xb    ; 004ca61f
    MOV dword ptr [EAX + 0x1350],0x0    ; 004ca629
    ADD ESP,0x4                         ; 004ca633
    POP EBP                             ; 004ca636
    POP EDI                             ; 004ca637
    POP ESI                             ; 004ca638
    POP EBX                             ; 004ca639
    RET                                 ; 004ca63a

