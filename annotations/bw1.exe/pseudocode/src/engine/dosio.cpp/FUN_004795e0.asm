; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_FUN_004795e0(char *input_path,char *drive,char *output_path)
;
; Parameters:
; char *           Stack[0x4]:4   input_path
; char *           Stack[0x8]:4   drive
; char *           Stack[0xc]:4   output_path
;
; XREF[1]:
;   unkafter_dosio.cpp_FUN_00479770 at 004797fa
;
; Called Functions:
;   engine_dosio.cpp_FUN_00479580
;   engine_dosio.cpp_FUN_004795b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004795e0
        ;   Label: engine_dosio.cpp_FUN_004795e0
    PUSH EDI                            ; 004795e1
    SUB ESP,0x300                       ; 004795e2
    MOV EBX,dword ptr [ESP + 0x314]     ; 004795e8
    MOV ECX,ESP                         ; 004795ef
    PUSH ECX                            ; 004795f1
    LEA ECX,[ESP + 0x204]               ; 004795f2
    PUSH ECX                            ; 004795f9
    LEA ECX,[ESP + 0x108]               ; 004795fa
    PUSH ECX                            ; 00479601
    MOV EDX,dword ptr [ESP + 0x31c]     ; 00479602
    PUSH EDX                            ; 00479609
    MOV ECX,dword ptr [ESP + 0x31c]     ; 0047960a
    PUSH ECX                            ; 00479611
    CALL engine_dosio.cpp_FUN_00479580  ; 00479612
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00479617
    MOV ECX,ESP                         ; 0047961a
    PUSH ECX                            ; 0047961c
    LEA ECX,[ESP + 0x204]               ; 0047961d
    PUSH ECX                            ; 00479624
    LEA ECX,[ESP + 0x108]               ; 00479625
    PUSH ECX                            ; 0047962c
    PUSH 0x0                            ; 0047962d
    PUSH EBX                            ; 0047962f
    CALL engine_dosio.cpp_FUN_004795b0  ; 00479630
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_004795b0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00479635
    TEST EBX,EBX                        ; 00479638
    JZ 0x00479641                       ; 0047963a
        ;   XREF to: 00479641 (CONDITIONAL_JUMP)  ; LAB_00479641
    CMP byte ptr [EBX],0x0              ; 0047963c
    JNZ 0x0047964a                      ; 0047963f
        ;   XREF to: 0047964a (CONDITIONAL_JUMP)  ; LAB_0047964a
    ADD ESP,0x300                       ; 00479641
        ;   Label: LAB_00479641
    POP EDI                             ; 00479647
    POP EBX                             ; 00479648
    RET                                 ; 00479649
    MOV EDI,EBX                         ; 0047964a
        ;   Label: LAB_0047964a
    SUB ECX,ECX                         ; 0047964c
    DEC ECX                             ; 0047964e
    XOR EAX,EAX                         ; 0047964f
    SCASB.REPNE ES:EDI                  ; 00479651
    NOT ECX                             ; 00479653
    DEC ECX                             ; 00479655
    ADD ECX,EBX                         ; 00479656
    MOV DL,byte ptr [ECX + -0x1]        ; 00479658
    CMP DL,0x5c                         ; 0047965b
    JZ 0x00479641                       ; 0047965e
        ;   XREF to: 00479641 (CONDITIONAL_JUMP)  ; LAB_00479641
    CMP DL,0x2f                         ; 00479660
    JZ 0x00479641                       ; 00479663
        ;   XREF to: 00479641 (CONDITIONAL_JUMP)  ; LAB_00479641
    PUSH ESI                            ; 00479665
    MOV ESI,0x5daacb                    ; 00479666
    MOV EDI,EBX                         ; 0047966b
    PUSH EDI                            ; 0047966d
    SUB ECX,ECX                         ; 0047966e
    DEC ECX                             ; 00479670
    MOV AL,0x0                          ; 00479671
    SCASB.REPNE ES:EDI                  ; 00479673
    DEC EDI                             ; 00479675
    MOV AL,byte ptr [ESI]               ; 00479676
        ;   Label: LAB_00479676
    MOV byte ptr [EDI],AL               ; 00479678
    CMP AL,0x0                          ; 0047967a
    JZ 0x0047968e                       ; 0047967c
        ;   XREF to: 0047968e (CONDITIONAL_JUMP)  ; LAB_0047968e
    MOV AL,byte ptr [ESI + 0x1]         ; 0047967e
    ADD ESI,0x2                         ; 00479681
    MOV byte ptr [EDI + 0x1],AL         ; 00479684
    ADD EDI,0x2                         ; 00479687
    CMP AL,0x0                          ; 0047968a
    JNZ 0x00479676                      ; 0047968c
        ;   XREF to: 00479676 (CONDITIONAL_JUMP)  ; LAB_00479676
    POP EDI                             ; 0047968e
        ;   Label: LAB_0047968e
    POP ESI                             ; 0047968f
    ADD ESP,0x300                       ; 00479690
    POP EDI                             ; 00479696
    POP EBX                             ; 00479697
    RET                                 ; 00479698

