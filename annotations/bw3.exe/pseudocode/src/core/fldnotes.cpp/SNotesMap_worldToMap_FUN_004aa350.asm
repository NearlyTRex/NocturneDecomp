; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fldnotes_cpp_SNotesMap_worldToMap_FUN_004aa350(SNotesMap *this_ptr,CLocation *location,int *map_x,int *map_y)
;
; Parameters:
; SNotesMap *      Stack[0x4]:4   this_ptr
; CLocation *      Stack[0x8]:4   location
; int *            Stack[0xc]:4   map_x
; int *            Stack[0x10]:4   map_y
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_fldnotes.cpp_SNotesMap_draw_FUN_004aa490 at 004aa5c2
;   core_fldnotes.cpp_SNotesMap_revealAtHero_FUN_004aa0b0 at 004aa0f4
;
; Referenced Globals:
;   undefined4 DAT_00600530
;   undefined4 DAT_01d81084
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa350
        ;   Label: core_fldnotes.cpp_SNotesMap_worldToMap_FUN_004aa350
    PUSH ESI                            ; 004aa351
    PUSH EDI                            ; 004aa352
    PUSH EBP                            ; 004aa353
    SUB ESP,0x14                        ; 004aa354
    MOV EBP,dword ptr [ESP + 0x28]      ; 004aa357
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004aa35b
    MOV EDX,dword ptr [EDI + 0xc]       ; 004aa35f
    TEST EDX,EDX                        ; 004aa362
    JL 0x004aa3b1                       ; 004aa364
        ;   XREF to: 004aa3b1 (CONDITIONAL_JUMP)  ; LAB_004aa3b1
    MOV EAX,[0x00600530]                ; 004aa366 | DAT_00600530
    CMP EDX,dword ptr [EAX + 0x4]       ; 004aa36b | DAT_01d81084
    JGE 0x004aa3b1                      ; 004aa36e
        ;   XREF to: 004aa3b1 (CONDITIONAL_JUMP)  ; LAB_004aa3b1
    MOV EBX,dword ptr [EBP + 0x9c]      ; 004aa370
    XOR ESI,ESI                         ; 004aa376
    TEST EBX,EBX                        ; 004aa378
    JLE 0x004aa3b1                      ; 004aa37a
        ;   XREF to: 004aa3b1 (CONDITIONAL_JUMP)  ; LAB_004aa3b1
    LEA EBX,[EBP + 0xa0]                ; 004aa37c
    MOV EDX,dword ptr [EDI + 0xc]       ; 004aa382
        ;   Label: LAB_004aa382
    MOV EAX,[0x00600530]                ; 004aa385 | DAT_00600530
    SHL EDX,0x8                         ; 004aa38a
    ADD EAX,0x8                         ; 004aa38d
    PUSH EBX                            ; 004aa390
    ADD EAX,EDX                         ; 004aa391
    PUSH EAX                            ; 004aa393
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004aa394
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa399
    TEST EAX,EAX                        ; 004aa39c
    JZ 0x004aa3be                       ; 004aa39e
        ;   XREF to: 004aa3be (CONDITIONAL_JUMP)  ; LAB_004aa3be
    INC ESI                             ; 004aa3a0
    MOV EAX,dword ptr [EBP + 0x9c]      ; 004aa3a1
    ADD EBX,0x88                        ; 004aa3a7
    CMP ESI,EAX                         ; 004aa3ad
    JL 0x004aa382                       ; 004aa3af
        ;   XREF to: 004aa382 (CONDITIONAL_JUMP)  ; LAB_004aa382
    MOV EAX,0xffffffff                  ; 004aa3b1
        ;   Label: LAB_004aa3b1
    ADD ESP,0x14                        ; 004aa3b6
    POP EBP                             ; 004aa3b9
    POP EDI                             ; 004aa3ba
    POP ESI                             ; 004aa3bb
    POP EBX                             ; 004aa3bc
    RET                                 ; 004aa3bd
    FLD float ptr [EBX + 0x7c]          ; 004aa3be
        ;   Label: LAB_004aa3be
    FLD float ptr [EDI]                 ; 004aa3c1
    FSUB float ptr [EBX + 0x74]         ; 004aa3c3
    FXCH                                ; 004aa3c6
    FSUB float ptr [EBX + 0x74]         ; 004aa3c8
    FXCH                                ; 004aa3cb
    FDIV ST0,ST1                        ; 004aa3cd
    FLD float ptr [EBX + 0x80]          ; 004aa3cf
    FLD float ptr [EDI + 0x8]           ; 004aa3d5
    FSUB float ptr [EBX + 0x78]         ; 004aa3d8
    FXCH                                ; 004aa3db
    FSUB float ptr [EBX + 0x78]         ; 004aa3dd
    FXCH                                ; 004aa3e0
    FDIV ST0,ST1                        ; 004aa3e2
    FXCH ST3                            ; 004aa3e4
    FMULP                               ; 004aa3e6
    FLDZ                                ; 004aa3e8
    FXCH ST2                            ; 004aa3ea
    FSTP float ptr [ESP + 0xc]          ; 004aa3ec
    FXCH ST2                            ; 004aa3f0
    FSTP float ptr [ESP + 0x8]          ; 004aa3f2
    FCOMPP                              ; 004aa3f6
    FNSTSW AX                           ; 004aa3f8
    SAHF                                ; 004aa3fa
    JNC 0x004aa44f                      ; 004aa3fb
        ;   XREF to: 004aa44f (CONDITIONAL_JUMP)  ; LAB_004aa44f
    MOV EAX,dword ptr [EBX + 0x6c]      ; 004aa3fd
    MOV EDI,dword ptr [EBX + 0x64]      ; 004aa400
    SUB EAX,EDI                         ; 004aa403
    MOV dword ptr [ESP + 0x10],EAX      ; 004aa405
    FILD dword ptr [ESP + 0x10]         ; 004aa409
    FMUL float ptr [ESP + 0x8]          ; 004aa40d
    FILD dword ptr [EBX + 0x64]         ; 004aa411
    FADDP                               ; 004aa414
    MOV EAX,dword ptr [ESP + 0x30]      ; 004aa416
    CALL crt_math.c_round_FUN_005a3120  ; 004aa41a
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EAX]               ; 004aa41f
    MOV EAX,dword ptr [EBX + 0x70]      ; 004aa421
    MOV EBP,dword ptr [EBX + 0x68]      ; 004aa424
    SUB EAX,EBP                         ; 004aa427
    MOV dword ptr [ESP + 0x10],EAX      ; 004aa429
    FILD dword ptr [ESP + 0x10]         ; 004aa42d
    FMUL float ptr [ESP + 0xc]          ; 004aa431
    FILD dword ptr [EBX + 0x68]         ; 004aa435
        ;   Label: LAB_004aa435
    FADDP                               ; 004aa438
    MOV EAX,dword ptr [ESP + 0x34]      ; 004aa43a
    CALL crt_math.c_round_FUN_005a3120  ; 004aa43e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EAX]               ; 004aa443
    MOV EAX,ESI                         ; 004aa445
    ADD ESP,0x14                        ; 004aa447
    POP EBP                             ; 004aa44a
    POP EDI                             ; 004aa44b
    POP ESI                             ; 004aa44c
    POP EBX                             ; 004aa44d
    RET                                 ; 004aa44e
    MOV EAX,dword ptr [EBX + 0x6c]      ; 004aa44f
        ;   Label: LAB_004aa44f
    MOV EDX,dword ptr [EBX + 0x64]      ; 004aa452
    SUB EAX,EDX                         ; 004aa455
    MOV dword ptr [ESP + 0x10],EAX      ; 004aa457
    FILD dword ptr [ESP + 0x10]         ; 004aa45b
    FMUL float ptr [ESP + 0xc]          ; 004aa45f
    FILD dword ptr [EBX + 0x64]         ; 004aa463
    FADDP                               ; 004aa466
    MOV EAX,dword ptr [ESP + 0x30]      ; 004aa468
    CALL crt_math.c_round_FUN_005a3120  ; 004aa46c
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EAX]               ; 004aa471
    MOV EAX,dword ptr [EBX + 0x70]      ; 004aa473
    MOV ECX,dword ptr [EBX + 0x68]      ; 004aa476
    SUB EAX,ECX                         ; 004aa479
    MOV dword ptr [ESP + 0x10],EAX      ; 004aa47b
    FILD dword ptr [ESP + 0x10]         ; 004aa47f
    FMUL float ptr [ESP + 0x8]          ; 004aa483
    JMP 0x004aa435                      ; 004aa487
        ;   XREF to: 004aa435 (UNCONDITIONAL_JUMP)  ; LAB_004aa435

